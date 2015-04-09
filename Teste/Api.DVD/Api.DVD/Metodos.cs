using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Runtime.InteropServices;

namespace Api.DVD
{
    public class Metodos
    {
        [DllImport("winmm.dll", EntryPoint = "mciSendStringA", CharSet = CharSet.Ansi)]
        protected static extern int mciSendString(string lpstrCommand,
        StringBuilder lpstrReturnString,
        int uReturnLength,
        IntPtr hwndCallback);

        string rt = "";

        public void openDVD()
        {
            int ret = mciSendString("set cdaudio door open", null, 0, IntPtr.Zero);
        }

        public void closeDVD()
        {
            int ret = mciSendString("set cdaudio door closed", null, 0, IntPtr.Zero);
        }
    }


}
