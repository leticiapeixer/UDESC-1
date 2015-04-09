using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Api.DVD;
using System.Threading;

namespace Execute
{
    class Program
    {
        
        static void Main(string[] args)
        {
            Metodos apiDVD = new Metodos();
            bool aux = true;
            do
            {
                apiDVD.openDVD();
                Thread.Sleep(1000);
                apiDVD.closeDVD();
                Thread.Sleep(1000);
            } while (aux);
            
        }
    }
}
