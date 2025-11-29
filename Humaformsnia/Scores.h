#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

namespace Humaformsnia {

    public ref class ScoreEntry
    {
    public:
        int Puntaje;
        String^ Nombre;

        ScoreEntry(int puntaje, String^ nombre) {
            Puntaje = puntaje;
            Nombre = nombre;
        }
    };

    public ref class GestorScores abstract sealed
    {
    public:
        literal String^ NombreArchivo = "SCORES.bin";
        literal String^ Carpeta = "FILES";

        static String^ ObtenerRutaCompleta() {
            Directory::CreateDirectory(Carpeta);
            return Path::Combine(Carpeta, NombreArchivo);
        }

        static void GuardarScore(int puntaje, String^ nombre) {

            String^ ruta = ObtenerRutaCompleta();

            FileStream^ fs = gcnew FileStream(
                ruta,
                FileMode::Append,
                FileAccess::Write
            );

            BinaryWriter^ bw = gcnew BinaryWriter(fs);

            bw->Write(puntaje);
            bw->Write(nombre);

            bw->Close();
            fs->Close();
        }

        static List<ScoreEntry^>^ LeerScores() {

            List<ScoreEntry^>^ lista = gcnew List<ScoreEntry^>();

            String^ ruta = ObtenerRutaCompleta();

            if (!File::Exists(ruta)) return lista;

            FileStream^ fs = gcnew FileStream(
                ruta,
                FileMode::Open,
                FileAccess::Read
            );

            BinaryReader^ br = gcnew BinaryReader(fs);

            try {
                while (fs->Position < fs->Length) {
                    int p = br->ReadInt32();
                    String^ n = br->ReadString();
                    lista->Add(gcnew ScoreEntry(p, n));
                }
            }
            finally {
                br->Close();
                fs->Close();
            }

            return lista;
        }
    };
}
