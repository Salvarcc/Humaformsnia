#pragma once

#include "Jugador.h"
#include "AlienAliado.h"
#include "Npc.h"
#include "RobotEnemigo.h"
#include "Pelota.h"
#include "Arbitro.h"  
using namespace System;
using namespace System::IO;
using namespace System::Collections::Generic;

namespace Humaformsnia {

    public ref class GestorArchivos
    {
    public:
        static void GuardarParametros(
            String^ nombreArchivo,
            int nivel_actual,
            Jugador^ alien,
            Jugador^ steve,
            Jugador^ minipekka,
            AlienAliado^ aliado,
            NPC^ npc,
            Arbitro^ arbitro,
            List<Robot^>^ robots,
            List<Pelota^>^ pelotas
        )
        {
            Directory::CreateDirectory("FILES");

            String^ rutaCompleta = Path::Combine("FILES", nombreArchivo);

            StreamWriter^ sw = gcnew StreamWriter(rutaCompleta, true);

            sw->WriteLine("-----");

            // NIVEL
            sw->WriteLine("NIVEL {0}", nivel_actual);

            // ALIEN
            if (alien != nullptr)
                sw->WriteLine("ALIEN {0} {1} {2}",
                    alien->getX(), alien->getY(), alien->getVidas());
            else
                sw->WriteLine("ALIEN NO HALLADO");

            // STEVE
            if (steve != nullptr)
                sw->WriteLine("STEVE {0} {1} {2}",
                    steve->getX(), steve->getY(), steve->getVidas());
            else
                sw->WriteLine("STEVE NO HALLADO");

            // MINIPEKKA
            if (minipekka != nullptr)
                sw->WriteLine("MINIPEKKA {0} {1} {2}",
                    minipekka->getX(), minipekka->getY(), minipekka->getVidas());
            else
                sw->WriteLine("MINIPEKKA NO HALLADO");

            // ALIADO
            if (aliado != nullptr)
                sw->WriteLine("ALIADO {0} {1}",
                    aliado->getX(), aliado->getY());
            else
                sw->WriteLine("ALIADO NO HALLADO");

            // NPC
            if (npc != nullptr)
                sw->WriteLine("NPC {0} {1}",
                    npc->getX(), npc->getY());
            else
                sw->WriteLine("NPC NO HALLADO");

            // ARBITRO
            if (arbitro != nullptr)
                sw->WriteLine("ARBITRO {0} {1}",
                    arbitro->getX(), arbitro->getY());
            else
                sw->WriteLine("ARBITRO NO HALLADO");

            // ROBOTS
            int cantRobots = (robots != nullptr) ? robots->Count : 0;
            sw->WriteLine("ROBOTS {0}", cantRobots);
            if (robots != nullptr) {
                for each (Robot ^ r in robots) {
                    sw->WriteLine("{0} {1}", r->getX(), r->getY());
                }
            }

            // PELOTAS
            int cantPelotas = (pelotas != nullptr) ? pelotas->Count : 0;
            sw->WriteLine("PELOTAS {0}", cantPelotas);
            if (pelotas != nullptr) {
                for each (Pelota ^ p in pelotas) {
                    sw->WriteLine("{0} {1}", p->getX(), p->getY());
                }
            }

            sw->Close();
        }
        
        static void BorrarArchivo(String^ nombreArchivo)
        {
            String^ rutaCompleta = Path::Combine("FILES", nombreArchivo);

            if (File::Exists(rutaCompleta)) {
                File::Delete(rutaCompleta);
            }
        }
    };
}
