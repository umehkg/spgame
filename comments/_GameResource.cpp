int __userpurge sub_409E60<eax>(int a1<ecx>, int a2<ebp>, int a3, int a4, signed int a5, signed int a6, signed int a7, int a8, int a9)
{
  int result; // eax@1
  int v10; // esi@1
  int v11; // edi@23
  bool v12; // zf@202
  int v13; // ecx@250
  int v14; // esi@297
  signed int v15; // edi@300
  int v16; // ecx@341
  int v17; // edx@341
  int v18; // ecx@346
  int v19; // edx@346
  signed int v20; // eax@370
  int v21; // edx@370
  int v22; // eax@381
  int v23; // ST2C_4@407
  signed int v24; // edi@410
  int v25; // ecx@451
  int v26; // edx@451
  int v27; // ecx@456
  int v28; // edx@456
  int v29; // edx@480
  int v30; // eax@480
  signed int v31; // eax@494
  int v32; // ecx@499
  int v33; // edx@499
  int v34; // ST2C_4@507
  int v35; // ST2C_4@507
  __int64 v36; // [sp-20h] [bp-28h]@480
  int v37; // [sp-1Ch] [bp-24h]@370
  int v38; // [sp-18h] [bp-20h]@286
  int v39; // [sp-18h] [bp-20h]@370
  int v40; // [sp-18h] [bp-20h]@480
  signed int v41; // [sp-14h] [bp-1Ch]@286
  signed int v42; // [sp-14h] [bp-1Ch]@370
  signed int v43; // [sp-14h] [bp-1Ch]@480
  signed int v44; // [sp-10h] [bp-18h]@286
  int v45; // [sp-10h] [bp-18h]@370
  signed int v46; // [sp-10h] [bp-18h]@480
  int v47; // [sp-Ch] [bp-14h]@286
  int v48; // [sp-Ch] [bp-14h]@341
  signed int v49; // [sp-Ch] [bp-14h]@370
  int v50; // [sp-Ch] [bp-14h]@451
  signed int v51; // [sp-Ch] [bp-14h]@480
  int v52; // [sp-Ch] [bp-14h]@495
  int v53; // [sp-Ch] [bp-14h]@499
  int v54; // [sp-8h] [bp-10h]@252
  int v55; // [sp-8h] [bp-10h]@382

  result = a5;
  v10 = a1;
  if ( a5 <= 1211 )
  {
    if ( a5 == 1211 )
    {
LABEL_265:
      v11 = *(_DWORD *)(16 * a6 + a1 + 3448);
    }
    else
    {
      switch ( a5 )
      {
        default:
          return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
        case 1113:
          goto LABEL_221;
        case 1114:
          goto LABEL_239;
        case 1111:
          goto LABEL_248;
        case 1121:
          goto LABEL_249;
        case 1131:
          goto LABEL_250;
        case 1141:
          goto LABEL_253;
        case 1112:
          goto LABEL_254;
        case 1122:
          goto LABEL_255;
        case 1132:
          goto LABEL_256;
        case 1123:
          goto LABEL_257;
        case 1133:
          goto LABEL_258;
        case 1124:
          goto LABEL_259;
        case 1134:
          goto LABEL_260;
        case 1142:
          goto LABEL_261;
        case 1143:
          goto LABEL_263;
        case 1144:
          break;
      }
LABEL_264:
      v11 = *(_DWORD *)(16 * a6 + a1 + 3172);
    }
    goto LABEL_252;
  }
  if ( a5 > 3217 )
  {
    if ( a5 <= 8132 )
    {
      if ( a5 == 8132 )
      {
LABEL_256:
        v13 = a6 + 207;
        goto LABEL_251;
      }
      if ( a5 <= 5909 )
      {
        if ( a5 == 5909 )
        {
LABEL_185:
          v11 = *(_DWORD *)(a1 + 6072);
          goto LABEL_252;
        }
        if ( a5 > 5002 )
        {
          if ( a5 <= 5100 )
          {
            if ( a5 != 5100 )
            {
              switch ( a5 )
              {
                case 5007:
                  v11 = *(_DWORD *)(a1 + 6064);
                  goto LABEL_252;
                case 5011:
                  v11 = *(_DWORD *)(a1 + 6076);
                  goto LABEL_252;
                case 5012:
                  v11 = *(_DWORD *)(a1 + 6080);
                  goto LABEL_252;
                case 5013:
                  v11 = *(_DWORD *)(a1 + 6084);
                  goto LABEL_252;
                case 5008:
                  goto LABEL_176;
                case 5003:
                  goto LABEL_180;
                case 5004:
                  goto LABEL_181;
                case 5005:
                  goto LABEL_182;
                case 5006:
                  goto LABEL_183;
                case 5009:
                  goto LABEL_184;
                case 5010:
                  goto LABEL_185;
                case 5014:
                  goto LABEL_199;
                default:
                  return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
              }
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            }
            goto LABEL_175;
          }
          if ( a5 > 5902 )
          {
            switch ( a5 )
            {
              case 5903:
                goto LABEL_179;
              case 5904:
LABEL_180:
                v11 = *(_DWORD *)(a1 + 6044);
                goto LABEL_252;
              case 5905:
LABEL_181:
                v11 = *(_DWORD *)(a1 + 6048);
                goto LABEL_252;
              case 5906:
LABEL_182:
                v11 = *(_DWORD *)(a1 + 6052);
                goto LABEL_252;
              case 5907:
LABEL_183:
                v11 = *(_DWORD *)(a1 + 6056);
                goto LABEL_252;
              case 5908:
LABEL_184:
                v11 = *(_DWORD *)(a1 + 6068);
                goto LABEL_252;
              default:
                return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            }
            return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
          }
          if ( a5 == 5902 )
            goto LABEL_155;
          if ( a5 > 5201 )
          {
            if ( a5 == 5202 )
            {
              v11 = *(_DWORD *)(a1 + 6096);
              goto LABEL_252;
            }
            if ( a5 == 5900 )
            {
LABEL_176:
              v11 = *(_DWORD *)(a1 + 6060);
              goto LABEL_252;
            }
            if ( a5 != 5901 )
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            goto LABEL_175;
          }
          if ( a5 == 5201 )
          {
            v11 = *(_DWORD *)(a1 + 6100);
            goto LABEL_252;
          }
          if ( a5 == 5101 )
            goto LABEL_155;
          if ( a5 != 5102 )
          {
            if ( a5 == 5200 )
            {
              v11 = *(_DWORD *)(a1 + 6092);
              goto LABEL_252;
            }
            return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
          }
        }
        else
        {
          if ( a5 != 5002 )
          {
            if ( a5 <= 4403 )
            {
              if ( a5 == 4403 )
              {
                v11 = *(_DWORD *)(a1 + 6200);
                goto LABEL_252;
              }
              if ( a5 > 4202 )
              {
                switch ( a5 )
                {
                  case 4203:
                    v11 = *(_DWORD *)(a1 + 6192);
                    goto LABEL_252;
                  case 4301:
                    v11 = *(_DWORD *)(a1 + 6140);
                    goto LABEL_252;
                  case 4302:
                    v11 = *(_DWORD *)(a1 + 6168);
                    goto LABEL_252;
                  case 4303:
                    v11 = *(_DWORD *)(a1 + 6196);
                    goto LABEL_252;
                  case 4401:
                    v11 = *(_DWORD *)(a1 + 6144);
                    goto LABEL_252;
                  case 4402:
                    v11 = *(_DWORD *)(a1 + 6172);
                    goto LABEL_252;
                  default:
                    return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
                }
              }
              else
              {
                if ( a5 == 4202 )
                {
                  v11 = *(_DWORD *)(a1 + 6164);
                  goto LABEL_252;
                }
                if ( a5 > 4102 )
                {
                  if ( a5 == 4103 )
                  {
                    v11 = *(_DWORD *)(a1 + 6188);
                    goto LABEL_252;
                  }
                  if ( a5 == 4201 )
                  {
                    v11 = *(_DWORD *)(a1 + 6136);
                    goto LABEL_252;
                  }
                }
                else
                {
                  if ( a5 == 4102 )
                  {
                    v11 = *(_DWORD *)(a1 + 6160);
                    goto LABEL_252;
                  }
                  if ( a5 == 3218 )
                  {
LABEL_119:
                    v11 = *(_DWORD *)(a1 + 6300);
                    goto LABEL_252;
                  }
                  if ( a5 == 4000 )
                  {
                    v11 = *(_DWORD *)(a1 + 6120);
                    goto LABEL_252;
                  }
                  if ( a5 == 4101 )
                  {
                    v11 = *(_DWORD *)(a1 + 6132);
                    goto LABEL_252;
                  }
                }
              }
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            }
            if ( a5 <= 4701 )
            {
              if ( a5 == 4701 )
              {
                v11 = *(_DWORD *)(a1 + 6156);
                goto LABEL_252;
              }
              switch ( a5 )
              {
                case 4501:
                  v11 = *(_DWORD *)(a1 + 6148);
                  goto LABEL_252;
                case 4502:
                  v11 = *(_DWORD *)(a1 + 6176);
                  goto LABEL_252;
                case 4503:
                  v11 = *(_DWORD *)(a1 + 6204);
                  goto LABEL_252;
                case 4601:
                  v11 = *(_DWORD *)(a1 + 6152);
                  goto LABEL_252;
                case 4602:
                  v11 = *(_DWORD *)(a1 + 6180);
                  goto LABEL_252;
                case 4603:
                  v11 = *(_DWORD *)(a1 + 6208);
                  goto LABEL_252;
                default:
                  return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
              }
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            }
            if ( a5 <= 4706 )
            {
              if ( a5 >= 4705 )
              {
                v11 = *(_DWORD *)(a1 + 6220);
                goto LABEL_252;
              }
              if ( a5 == 4702 )
              {
                v11 = *(_DWORD *)(a1 + 6184);
                goto LABEL_252;
              }
              if ( a5 == 4703 )
              {
                v11 = *(_DWORD *)(a1 + 6212);
                goto LABEL_252;
              }
              if ( a5 == 4704 )
              {
                v11 = *(_DWORD *)(a1 + 6216);
                goto LABEL_252;
              }
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            }
            if ( a5 != 5000 )
            {
              if ( a5 != 5001 )
                return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
LABEL_155:
              v11 = *(_DWORD *)(a1 + 6040);
              goto LABEL_252;
            }
LABEL_175:
            v11 = *(_DWORD *)(a1 + 6032);
            goto LABEL_252;
          }
        }
LABEL_179:
        v11 = *(_DWORD *)(a1 + 6036);
        goto LABEL_252;
      }
      if ( a5 <= 7223 )
      {
        if ( a5 == 7223 )
        {
LABEL_274:
          v11 = *(_DWORD *)(16 * a6 + a1 + 3596);
          goto LABEL_252;
        }
        if ( a5 > 7131 )
        {
          switch ( a5 )
          {
            default:
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            case 7141:
              goto LABEL_253;
            case 7132:
              goto LABEL_256;
            case 7133:
              goto LABEL_258;
            case 7134:
              goto LABEL_260;
            case 7142:
              goto LABEL_261;
            case 7143:
              goto LABEL_263;
            case 7144:
              goto LABEL_264;
            case 7211:
              goto LABEL_265;
            case 7221:
              goto LABEL_266;
            case 7212:
              goto LABEL_269;
            case 7222:
              goto LABEL_270;
            case 7213:
              goto LABEL_273;
            case 7214:
              break;
          }
LABEL_277:
          v11 = *(_DWORD *)(16 * a6 + a1 + 3736);
          goto LABEL_252;
        }
        if ( a5 != 7131 )
        {
          if ( a5 <= 7112 )
          {
            if ( a5 != 7112 )
            {
              if ( a5 <= 6002 )
              {
                if ( a5 == 6002 )
                {
                  v11 = *(_DWORD *)(a1 + 6112);
                  goto LABEL_252;
                }
                if ( a5 == 5910 )
                {
LABEL_199:
                  v11 = *(_DWORD *)(a1 + 6088);
                  goto LABEL_252;
                }
                if ( a5 == 6000 )
                {
                  v11 = *(_DWORD *)(a1 + 6104);
                  goto LABEL_252;
                }
                if ( a5 == 6001 )
                {
                  v11 = *(_DWORD *)(a1 + 6108);
                  goto LABEL_252;
                }
                return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
              }
              if ( a5 == 6003 )
              {
                v11 = *(_DWORD *)(a1 + 6116);
                goto LABEL_252;
              }
              v12 = a5 == 7111;
              goto LABEL_203;
            }
            goto LABEL_254;
          }
          switch ( a5 )
          {
            default:
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            case 7113:
              goto LABEL_221;
            case 7114:
              goto LABEL_239;
            case 7121:
              goto LABEL_249;
            case 7122:
              goto LABEL_255;
            case 7123:
              goto LABEL_257;
            case 7124:
              break;
          }
LABEL_259:
          v11 = *(_DWORD *)(16 * a6 + a1 + 3164);
          goto LABEL_252;
        }
LABEL_250:
        v13 = a6 + 189;
LABEL_251:
        v11 = *(_DWORD *)(16 * v13 + v10);
        goto LABEL_252;
      }
      if ( a5 <= 7331 )
      {
        if ( a5 != 7331 )
        {
          switch ( a5 )
          {
            default:
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            case 7231:
              goto LABEL_267;
            case 7241:
              goto LABEL_268;
            case 7232:
              goto LABEL_271;
            case 7242:
              goto LABEL_272;
            case 7233:
              goto LABEL_275;
            case 7243:
              goto LABEL_276;
            case 7224:
              goto LABEL_278;
            case 7234:
              goto LABEL_279;
            case 7244:
              goto LABEL_280;
            case 7311:
            case 7312:
              goto LABEL_281;
            case 7321:
            case 7322:
              break;
          }
LABEL_282:
          v11 = *(_DWORD *)(16 * a6 + a1 + 4028);
          goto LABEL_252;
        }
        goto LABEL_283;
      }
      if ( a5 > 8114 )
      {
        switch ( a5 )
        {
          default:
            return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
          case 8121:
            goto LABEL_249;
          case 8131:
            goto LABEL_250;
          case 8122:
            goto LABEL_255;
          case 8123:
            goto LABEL_257;
          case 8124:
            goto LABEL_259;
        }
        goto LABEL_259;
      }
      if ( a5 != 8114 )
      {
        if ( a5 <= 8111 )
        {
          if ( a5 != 8111 )
          {
            if ( a5 == 7332 )
            {
LABEL_283:
              v13 = a6 + 252;
              goto LABEL_251;
            }
            if ( a5 == 7341 || a5 == 7342 )
              goto LABEL_218;
            return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
          }
LABEL_248:
          v11 = *(_DWORD *)(16 * a6 + a1 + 3016);
          goto LABEL_252;
        }
        if ( a5 == 8112 )
          goto LABEL_254;
        if ( a5 != 8113 )
          return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
        goto LABEL_221;
      }
      goto LABEL_239;
    }
    if ( a5 > 9232 )
    {
      if ( a5 > 11142 )
      {
        switch ( a5 )
        {
          default:
            return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
          case 11341:
          case 11342:
            goto LABEL_218;
          case 11143:
LABEL_263:
            v11 = *(_DWORD *)(16 * a6 + a1 + 2884);
            goto LABEL_252;
          case 11144:
            goto LABEL_264;
          case 11211:
            goto LABEL_265;
          case 11221:
LABEL_266:
            v11 = *(_DWORD *)(16 * a6 + a1 + 3452);
            goto LABEL_252;
          case 11231:
LABEL_267:
            v13 = a6 + 216;
            goto LABEL_251;
          case 11241:
LABEL_268:
            v11 = *(_DWORD *)(16 * a6 + a1 + 3460);
            goto LABEL_252;
          case 11212:
LABEL_269:
            v11 = *(_DWORD *)(16 * a6 + a1 + 3880);
            goto LABEL_252;
          case 11222:
LABEL_270:
            v11 = *(_DWORD *)(16 * a6 + a1 + 3884);
            goto LABEL_252;
          case 11232:
            goto LABEL_271;
          case 11242:
LABEL_272:
            v11 = *(_DWORD *)(16 * a6 + a1 + 3892);
            goto LABEL_252;
          case 11213:
LABEL_273:
            v11 = *(_DWORD *)(16 * a6 + a1 + 3592);
            goto LABEL_252;
          case 11223:
            goto LABEL_274;
          case 11233:
LABEL_275:
            v13 = a6 + 225;
            goto LABEL_251;
          case 11243:
            goto LABEL_276;
          case 11214:
            goto LABEL_277;
          case 11224:
            goto LABEL_278;
          case 11234:
            goto LABEL_279;
          case 11244:
LABEL_280:
            v11 = *(_DWORD *)(16 * a6 + a1 + 3748);
            goto LABEL_252;
          case 11311:
          case 11312:
LABEL_281:
            v11 = *(_DWORD *)(16 * a6 + a1 + 4024);
            goto LABEL_252;
          case 11321:
          case 11322:
            goto LABEL_282;
          case 11331:
          case 11332:
            goto LABEL_283;
        }
        goto LABEL_283;
      }
      if ( a5 == 11142 )
      {
LABEL_261:
        v11 = *(_DWORD *)(16 * a6 + a1 + 3316);
        goto LABEL_252;
      }
      if ( a5 <= 9342 )
      {
        if ( a5 != 9342 )
        {
          switch ( a5 )
          {
            default:
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            case 9341:
              goto LABEL_218;
            case 9241:
              goto LABEL_268;
            case 9242:
              goto LABEL_272;
            case 9233:
              goto LABEL_275;
            case 9243:
              goto LABEL_276;
            case 9234:
              goto LABEL_279;
            case 9244:
              goto LABEL_280;
            case 9311:
            case 9312:
              goto LABEL_281;
            case 9321:
            case 9322:
              goto LABEL_282;
            case 9331:
            case 9332:
              goto LABEL_283;
          }
          goto LABEL_283;
        }
        goto LABEL_218;
      }
      switch ( a5 )
      {
        default:
          return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
        case 11113:
          goto LABEL_221;
        case 11114:
          goto LABEL_239;
        case 11111:
          goto LABEL_248;
        case 11121:
          goto LABEL_249;
        case 11131:
          goto LABEL_250;
        case 11141:
LABEL_253:
          v11 = *(_DWORD *)(16 * a6 + a1 + 3028);
          goto LABEL_252;
        case 11112:
          goto LABEL_254;
        case 11122:
LABEL_255:
          v11 = *(_DWORD *)(16 * a6 + a1 + 3308);
          goto LABEL_252;
        case 11132:
          goto LABEL_256;
        case 11123:
LABEL_257:
          v11 = *(_DWORD *)(16 * a6 + a1 + 2876);
          goto LABEL_252;
        case 11133:
LABEL_258:
          v13 = a6 + 180;
          goto LABEL_251;
        case 11124:
          goto LABEL_259;
        case 11134:
          break;
      }
    }
    else
    {
      if ( a5 == 9232 )
      {
LABEL_271:
        v13 = a6 + 243;
        goto LABEL_251;
      }
      if ( a5 <= 8332 )
      {
        if ( a5 != 8332 )
        {
          switch ( a5 )
          {
            default:
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            case 8141:
              goto LABEL_253;
            case 8133:
              goto LABEL_258;
            case 8134:
              goto LABEL_260;
            case 8142:
              goto LABEL_261;
            case 8143:
              goto LABEL_263;
            case 8144:
              goto LABEL_264;
            case 8211:
              goto LABEL_265;
            case 8221:
              goto LABEL_266;
            case 8231:
              goto LABEL_267;
            case 8241:
              goto LABEL_268;
            case 8212:
              goto LABEL_269;
            case 8222:
              goto LABEL_270;
            case 8232:
              goto LABEL_271;
            case 8242:
              goto LABEL_272;
            case 8213:
              goto LABEL_273;
            case 8223:
              goto LABEL_274;
            case 8233:
              goto LABEL_275;
            case 8243:
              goto LABEL_276;
            case 8214:
              goto LABEL_277;
            case 8224:
              goto LABEL_278;
            case 8234:
              goto LABEL_279;
            case 8244:
              goto LABEL_280;
            case 8311:
            case 8312:
              goto LABEL_281;
            case 8321:
            case 8322:
              goto LABEL_282;
            case 8331:
              goto LABEL_283;
          }
        }
        goto LABEL_283;
      }
      if ( a5 > 9134 )
      {
        switch ( a5 )
        {
          default:
            return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
          case 9141:
            goto LABEL_253;
          case 9142:
            goto LABEL_261;
          case 9143:
            goto LABEL_263;
          case 9144:
            goto LABEL_264;
          case 9211:
            goto LABEL_265;
          case 9221:
            goto LABEL_266;
          case 9231:
            goto LABEL_267;
          case 9212:
            goto LABEL_269;
          case 9222:
            goto LABEL_270;
          case 9213:
            goto LABEL_273;
          case 9223:
            goto LABEL_274;
          case 9214:
            goto LABEL_277;
          case 9224:
            break;
        }
LABEL_278:
        v11 = *(_DWORD *)(16 * a6 + a1 + 3740);
        goto LABEL_252;
      }
      if ( a5 != 9134 )
      {
        if ( a5 > 9121 )
        {
          switch ( a5 )
          {
            default:
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            case 9131:
              goto LABEL_250;
            case 9122:
              goto LABEL_255;
            case 9132:
              goto LABEL_256;
            case 9123:
              goto LABEL_257;
            case 9133:
              goto LABEL_258;
            case 9124:
              goto LABEL_259;
          }
          goto LABEL_259;
        }
        if ( a5 == 9121 )
        {
LABEL_249:
          v11 = *(_DWORD *)(16 * a6 + a1 + 3020);
          goto LABEL_252;
        }
        if ( a5 <= 9112 )
        {
          if ( a5 != 9112 )
          {
            if ( a5 == 8341 || a5 == 8342 )
              goto LABEL_218;
            v12 = a5 == 9111;
LABEL_203:
            if ( !v12 )
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
            goto LABEL_248;
          }
LABEL_254:
          v11 = *(_DWORD *)(16 * a6 + a1 + 3304);
          goto LABEL_252;
        }
        if ( a5 == 9113 )
        {
LABEL_221:
          v11 = *(_DWORD *)(16 * a6 + a1 + 2872);
          goto LABEL_252;
        }
        if ( a5 != 9114 )
          return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
LABEL_239:
        v11 = *(_DWORD *)(16 * a6 + a1 + 3160);
        goto LABEL_252;
      }
    }
LABEL_260:
    v13 = a6 + 198;
    goto LABEL_251;
  }
  if ( a5 == 3217 )
  {
LABEL_101:
    v11 = *(_DWORD *)(a1 + 6296);
    goto LABEL_252;
  }
  if ( a5 > 3025 )
  {
    switch ( a5 )
    {
      case 3030:
      case 3040:
      case 3050:
      case 3060:
      case 3210:
LABEL_84:
        v11 = *(_DWORD *)(a1 + 6268);
        goto LABEL_252;
      case 3031:
      case 3041:
      case 3051:
      case 3061:
      case 3211:
LABEL_85:
        v11 = *(_DWORD *)(a1 + 6272);
        goto LABEL_252;
      case 3032:
      case 3042:
      case 3052:
      case 3062:
      case 3212:
LABEL_86:
        v11 = *(_DWORD *)(a1 + 6276);
        goto LABEL_252;
      case 3033:
      case 3043:
      case 3053:
      case 3063:
      case 3213:
LABEL_87:
        v11 = *(_DWORD *)(a1 + 6280);
        goto LABEL_252;
      case 3034:
      case 3044:
      case 3054:
      case 3064:
      case 3214:
LABEL_88:
        v11 = *(_DWORD *)(a1 + 6284);
        goto LABEL_252;
      case 3035:
      case 3045:
      case 3055:
      case 3065:
      case 3215:
        goto LABEL_89;
      case 3026:
      case 3036:
      case 3046:
      case 3056:
      case 3066:
      case 3216:
LABEL_90:
        v11 = *(_DWORD *)(a1 + 6292);
        goto LABEL_252;
      case 3100:
      case 3110:
      case 3120:
      case 3130:
      case 3140:
      case 3150:
      case 3200:
        v11 = *(_DWORD *)(a1 + 6448);
        goto LABEL_252;
      case 3101:
      case 3111:
      case 3121:
      case 3131:
      case 3141:
      case 3151:
      case 3201:
        v11 = *(_DWORD *)(a1 + 6452);
        goto LABEL_252;
      case 3102:
      case 3112:
      case 3122:
      case 3132:
      case 3142:
      case 3152:
      case 3202:
        v11 = *(_DWORD *)(a1 + 6456);
        goto LABEL_252;
      case 3103:
      case 3113:
      case 3123:
      case 3133:
      case 3143:
      case 3153:
      case 3203:
        v11 = *(_DWORD *)(a1 + 6460);
        goto LABEL_252;
      case 3104:
      case 3114:
      case 3124:
      case 3134:
      case 3144:
      case 3154:
      case 3204:
        v11 = *(_DWORD *)(a1 + 6464);
        goto LABEL_252;
      case 3105:
      case 3115:
      case 3125:
      case 3135:
      case 3145:
      case 3155:
      case 3205:
        v11 = *(_DWORD *)(a1 + 6468);
        goto LABEL_252;
      case 3106:
      case 3116:
      case 3126:
      case 3136:
      case 3146:
      case 3156:
      case 3206:
        v11 = *(_DWORD *)(a1 + 6472);
        goto LABEL_252;
      case 3107:
      case 3117:
      case 3127:
      case 3137:
      case 3147:
      case 3157:
      case 3207:
        v11 = *(_DWORD *)(a1 + 6476);
        goto LABEL_252;
      case 3108:
      case 3118:
      case 3128:
      case 3138:
      case 3148:
      case 3158:
      case 3208:
        v11 = *(_DWORD *)(a1 + 6480);
        goto LABEL_252;
      case 3109:
        v11 = *(_DWORD *)(a1 + 6484);
        goto LABEL_252;
      case 3027:
      case 3037:
      case 3047:
      case 3057:
      case 3067:
        goto LABEL_101;
      case 3028:
      case 3038:
      case 3048:
      case 3058:
      case 3068:
        goto LABEL_119;
      default:
        return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
    }
    return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
  }
  if ( a5 == 3025 )
  {
LABEL_89:
    v11 = *(_DWORD *)(a1 + 6288);
    goto LABEL_252;
  }
  if ( a5 > 2111 )
  {
    if ( a5 > 2911 )
    {
      switch ( a5 )
      {
        case 2912:
LABEL_80:
          v11 = *(_DWORD *)(a1 + 5908);
          goto LABEL_252;
        case 2913:
LABEL_81:
          v11 = *(_DWORD *)(a1 + 5912);
          goto LABEL_252;
        case 2914:
LABEL_82:
          v11 = *(_DWORD *)(a1 + 5916);
          goto LABEL_252;
        case 3000:
        case 3010:
        case 3020:
          goto LABEL_84;
        case 3001:
        case 3011:
        case 3021:
          goto LABEL_85;
        case 3002:
        case 3012:
        case 3022:
          goto LABEL_86;
        case 3003:
        case 3013:
        case 3023:
          goto LABEL_87;
        case 3004:
        case 3014:
        case 3024:
          goto LABEL_88;
        case 3005:
        case 3015:
          goto LABEL_89;
        case 3006:
        case 3016:
          goto LABEL_90;
        case 3007:
        case 3017:
          goto LABEL_101;
        case 3008:
        case 3018:
          goto LABEL_119;
        default:
          return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
      }
    }
    else
    {
      if ( a5 == 2911 )
      {
LABEL_78:
        v11 = *(_DWORD *)(a1 + 5904);
        goto LABEL_252;
      }
      if ( a5 > 2212 )
      {
        if ( a5 > 2900 )
        {
          switch ( a5 )
          {
            case 2901:
              goto LABEL_78;
            case 2902:
              goto LABEL_80;
            case 2903:
              goto LABEL_81;
            case 2904:
              goto LABEL_82;
            default:
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
          }
        }
        else
        {
          if ( a5 == 2900 )
          {
            v11 = *(_DWORD *)(a1 + 5568);
            goto LABEL_252;
          }
          switch ( a5 )
          {
            case 2500:
              v11 = *(_DWORD *)(a1 + 5980);
              goto LABEL_252;
            case 2501:
              v11 = *(_DWORD *)(a1 + 5984);
              goto LABEL_252;
            case 2502:
              v11 = *(_DWORD *)(a1 + 5988);
              goto LABEL_252;
            case 2503:
              v11 = *(_DWORD *)(a1 + 5992);
              goto LABEL_252;
            case 2504:
              v11 = *(_DWORD *)(a1 + 5996);
              goto LABEL_252;
            case 2505:
              v11 = *(_DWORD *)(a1 + 6000);
              goto LABEL_252;
            case 2506:
              v11 = *(_DWORD *)(a1 + 6004);
              goto LABEL_252;
            case 2507:
              v11 = *(_DWORD *)(a1 + 6008);
              goto LABEL_252;
            default:
              return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
          }
        }
      }
      else
      {
        if ( a5 == 2212 )
        {
LABEL_64:
          v11 = *(_DWORD *)(a1 + 5892);
          goto LABEL_252;
        }
        switch ( a5 )
        {
          case 2201:
LABEL_52:
            v11 = *(_DWORD *)(a1 + 5848);
            goto LABEL_252;
          case 2202:
LABEL_53:
            v11 = *(_DWORD *)(a1 + 5852);
            goto LABEL_252;
          case 2203:
LABEL_54:
            v11 = *(_DWORD *)(a1 + 5856);
            goto LABEL_252;
          case 2204:
LABEL_55:
            v11 = *(_DWORD *)(a1 + 5860);
            goto LABEL_252;
          case 2205:
LABEL_56:
            v11 = *(_DWORD *)(a1 + 5864);
            goto LABEL_252;
          case 2206:
LABEL_57:
            v11 = *(_DWORD *)(a1 + 5868);
            goto LABEL_252;
          case 2207:
LABEL_58:
            v11 = *(_DWORD *)(a1 + 5872);
            goto LABEL_252;
          case 2208:
LABEL_59:
            v11 = *(_DWORD *)(a1 + 5876);
            goto LABEL_252;
          case 2209:
LABEL_60:
            v11 = *(_DWORD *)(a1 + 5880);
            goto LABEL_252;
          case 2210:
LABEL_61:
            v11 = *(_DWORD *)(a1 + 5884);
            goto LABEL_252;
          case 2211:
            goto LABEL_62;
          case 2150:
            v11 = *(_DWORD *)(a1 + 5896);
            goto LABEL_252;
          case 2112:
            goto LABEL_64;
          default:
            return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
        }
      }
    }
    return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
  }
  if ( a5 == 2111 )
  {
LABEL_62:
    v11 = *(_DWORD *)(a1 + 5888);
    goto LABEL_252;
  }
  if ( a5 > 2004 )
  {
    switch ( a5 )
    {
      case 2005:
        v11 = *(_DWORD *)(a1 + 6028);
        goto LABEL_252;
      case 2006:
        v11 = *(_DWORD *)(a1 + 5920);
        goto LABEL_252;
      case 2007:
        v11 = *(_DWORD *)(a1 + 5924);
        goto LABEL_252;
      case 2008:
        v11 = *(_DWORD *)(a1 + 5928);
        goto LABEL_252;
      case 2009:
      case 2011:
        v11 = *(_DWORD *)(a1 + 5932);
        goto LABEL_252;
      case 2010:
        v11 = *(_DWORD *)(a1 + 5936);
        goto LABEL_252;
      case 2012:
        v11 = *(_DWORD *)(a1 + 5940);
        goto LABEL_252;
      case 2013:
        v11 = *(_DWORD *)(a1 + 5944);
        goto LABEL_252;
      case 2014:
        v11 = *(_DWORD *)(a1 + 5948);
        goto LABEL_252;
      case 2015:
        v11 = *(_DWORD *)(a1 + 5952);
        goto LABEL_252;
      case 2016:
        v11 = *(_DWORD *)(a1 + 5956);
        goto LABEL_252;
      case 2017:
        v11 = *(_DWORD *)(a1 + 5972);
        goto LABEL_252;
      case 2018:
        v11 = *(_DWORD *)(a1 + 5960);
        goto LABEL_252;
      case 2019:
        v11 = *(_DWORD *)(a1 + 5964);
        goto LABEL_252;
      case 2020:
        v11 = *(_DWORD *)(a1 + 5968);
        goto LABEL_252;
      case 2021:
        v11 = *(_DWORD *)(a1 + 5976);
        goto LABEL_252;
      case 2101:
        goto LABEL_52;
      case 2102:
        goto LABEL_53;
      case 2103:
        goto LABEL_54;
      case 2104:
        goto LABEL_55;
      case 2105:
        goto LABEL_56;
      case 2106:
        goto LABEL_57;
      case 2107:
        goto LABEL_58;
      case 2108:
        goto LABEL_59;
      case 2109:
        goto LABEL_60;
      case 2110:
        goto LABEL_61;
      default:
        return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
    }
    return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
  }
  if ( a5 == 2004 )
  {
    v11 = *(_DWORD *)(a1 + 6024);
    goto LABEL_252;
  }
  if ( a5 > 1243 )
  {
    if ( a5 <= 1332 )
    {
      if ( a5 != 1332 )
      {
        switch ( a5 )
        {
          default:
            return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
          case 1244:
            goto LABEL_280;
          case 1311:
          case 1312:
            goto LABEL_281;
          case 1321:
          case 1322:
            goto LABEL_282;
          case 1331:
            goto LABEL_283;
        }
      }
      goto LABEL_283;
    }
    if ( a5 <= 2001 )
    {
      if ( a5 == 2001 )
      {
        v11 = *(_DWORD *)(a1 + 6012);
        goto LABEL_252;
      }
      if ( a5 != 1341 && a5 != 1342 )
      {
        if ( a5 == 2000 )
        {
          v11 = *(_DWORD *)(a1 + 5900);
          goto LABEL_252;
        }
        return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
      }
LABEL_218:
      v11 = *(_DWORD *)(16 * a6 + a1 + 4036);
      goto LABEL_252;
    }
    if ( a5 == 2002 )
    {
      v11 = *(_DWORD *)(a1 + 6016);
      goto LABEL_252;
    }
    if ( a5 == 2003 )
    {
      v11 = *(_DWORD *)(a1 + 6020);
      goto LABEL_252;
    }
    return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
  }
  if ( a5 != 1243 )
  {
    switch ( a5 )
    {
      default:
        return CLog::DebugLog(dword_76D3B4, 0, ".\\GameResource.cpp", 1358, "ASSERT Fail,return");
      case 1221:
        goto LABEL_266;
      case 1231:
        goto LABEL_267;
      case 1241:
        goto LABEL_268;
      case 1212:
        goto LABEL_269;
      case 1222:
        goto LABEL_270;
      case 1232:
        goto LABEL_271;
      case 1242:
        goto LABEL_272;
      case 1213:
        goto LABEL_273;
      case 1223:
        goto LABEL_274;
      case 1233:
        goto LABEL_275;
      case 1214:
        goto LABEL_277;
      case 1224:
        goto LABEL_278;
      case 1234:
        break;
    }
LABEL_279:
    v13 = a6 + 234;
    goto LABEL_251;
  }
LABEL_276:
  v11 = *(_DWORD *)(16 * a6 + a1 + 3604);
LABEL_252:
  v54 = a2;
  switch ( a9 )
  {
    case 0:
      sub_70FDD0(v11, a3, a4);
      break;
    case 1:
      sub_70FDD0(v11, a3, a4);
      goto LABEL_290;
    case 2:
      sub_70FDD0(v11, a3, a4);
      sub_70FE20(v11, a3, a4);
      sub_70FE20(v11, a3, a4);
      v47 = a8;
      v44 = a6;
      v41 = a5;
      v38 = a4 + 17;
      goto LABEL_291;
    case 3:
      sub_70FE70(v11, a3, a4, a2);
      break;
    case 4:
      sub_70FE70(v11, a3, a4, a2);
      sub_70FE20(v11, a3, a4);
      v47 = a8;
      v44 = a6;
      v41 = a5;
      v38 = a4 + 17;
      goto LABEL_291;
    case 5:
      sub_70FE70(v11, a3, a4, a2);
      sub_70FE20(v11, a3, a4);
LABEL_290:
      sub_70FE20(v11, a3, a4);
      v47 = a8;
      v44 = a6;
      v41 = a5;
      v38 = a4 + 17;
LABEL_291:
      sub_409540(a3, v38, v41, v44, v47);
      break;
    default:
      return result;
  }
  switch ( a9 )
  {
    case 0:
    case 1:
    case 2:
      if ( a5 == 4000 )
      {
        sub_70FDD0(*(_DWORD *)(v10 + 6368), a3, a4);
        sub_70FDD0(*(_DWORD *)(v10 + 6124), a3 + 2, a4 + 2);
        goto LABEL_295;
      }
      if ( a5 >= 3100 && a5 < 3110 )
      {
        v15 = a5;
LABEL_398:
        if ( (unsigned __int8)sub_61D650(v15) || (unsigned __int8)sub_61D6B0(v15) )
        {
          a7 = a6;
        }
        else
        {
          if ( !(unsigned __int8)sub_61D470(&a7, v15) )
            a7 = 7;
        }
        sub_70FDD0(*(_DWORD *)(v10 + 6368), a3, a4);
        v22 = a8;
        v55 = *(_DWORD *)(v10 + 6404);
        goto LABEL_404;
      }
      v15 = a5;
      if ( (unsigned __int8)sub_61D320(a5) || (unsigned __int8)sub_61D650(a5) || (unsigned __int8)sub_61D6B0(a5) )
        goto LABEL_398;
      if ( (unsigned __int8)sub_61D600(a5) )
      {
        sub_70FDD0(*(_DWORD *)(v10 + 6444), a3, a4);
        sub_409CD0(a3, a4, a7, 2, *(_DWORD *)(v10 + 6412));
        return sub_409C20(a3, a4);
      }
      if ( a5 >= 4100 && a5 < 5000 )
      {
        sub_70FDD0(*(_DWORD *)(v10 + 6388), a3, a4);
        return sub_409C50(a3, a4);
      }
      if ( a5 >= 1000 && a5 < 2000 || a5 >= 3000 && a5 < 4000 || (unsigned __int8)sub_61D2A0(a5) )
      {
        if ( a5 < 3000 )
        {
          if ( a5 < 3010 )
          {
            if ( a5 < 3020 )
            {
              if ( a5 < 3030 )
              {
                if ( a5 < 3040 )
                {
                  if ( a5 < 3050 )
                  {
                    if ( a5 < 3060 )
                      goto LABEL_334;
                    goto LABEL_332;
                  }
LABEL_329:
                  if ( a5 < 3060 )
                  {
                    a7 = 45;
                    goto LABEL_335;
                  }
LABEL_332:
                  if ( a5 < 3070 )
                  {
                    a7 = 999;
                    goto LABEL_335;
                  }
LABEL_334:
                  if ( a7 > 0 )
                  {
LABEL_335:
                    sub_70FDD0(*(_DWORD *)(v10 + 6368), a3, a4);
                    sub_409CD0(a3, a4, a7, 2, *(_DWORD *)(v10 + 6404));
                    if ( (unsigned __int8)sub_61D500(a5) )
                    {
                      sub_70FDD0(*(_DWORD *)(v10 + 6432), a3 + 29, a4 + 2);
                      sub_409C20(a3, a4);
                    }
                    else
                    {
                      if ( a8 )
                        sub_70FDD0(*(_DWORD *)(v10 + 6424), a3 + 35, a4 + 2);
                      sub_409C20(a3, a4);
                    }
                    goto LABEL_345;
                  }
                  sub_70FDD0(*(_DWORD *)(v10 + 6372), a3, a4);
                  if ( (unsigned __int8)sub_61D500(a5) )
                  {
                    v48 = a4 + 2;
                    v16 = *(_DWORD *)(v10 + 6428);
                    v17 = a3 + 29;
                  }
                  else
                  {
                    if ( !a8 )
                      goto LABEL_345;
                    v16 = *(_DWORD *)(v10 + 6420);
                    v48 = a4 + 2;
                    v17 = a3 + 35;
                  }
                  sub_70FDD0(v16, v17, v48);
LABEL_345:
                  result = sub_61D2A0(a5);
                  if ( (_BYTE)result )
                  {
                    v18 = *(_DWORD *)(v10 + 6528);
                    v19 = a3 + 30;
                    if ( a8 )
                      result = sub_70FDD0(v18, v19, a4 + 18);
                    else
                      result = sub_70FDD0(v18, v19, a4 + 2);
                  }
                  return result;
                }
LABEL_326:
                if ( a5 < 3050 )
                {
                  a7 = 3;
                  goto LABEL_335;
                }
                goto LABEL_329;
              }
LABEL_323:
              if ( a5 < 3040 )
              {
                a7 = 1;
                goto LABEL_335;
              }
              goto LABEL_326;
            }
LABEL_320:
            if ( a5 < 3030 )
            {
              a7 = 425;
              goto LABEL_335;
            }
            goto LABEL_323;
          }
        }
        else
        {
          if ( a5 < 3010 )
          {
            a7 = 30;
            goto LABEL_335;
          }
        }
        if ( a5 < 3020 )
        {
          a7 = 365;
          goto LABEL_335;
        }
        goto LABEL_320;
      }
      if ( (unsigned __int8)sub_61D610(a5) || (unsigned __int8)sub_61D2E0(a5) )
      {
        sub_70FDD0(*(_DWORD *)(v10 + 6376), a3, a4);
        sub_409CD0(a3, a4, a7, 2, *(_DWORD *)(v10 + 6408));
        sub_70FDD0(*(_DWORD *)(v10 + 6528), a3 + 30, a4 + 2);
        return sub_409C20(a3, a4);
      }
      if ( a5 < 2000 || a5 >= 3000 )
      {
        if ( a5 < 5900 || a5 >= 6000 )
        {
          if ( a5 < 5000 || a5 >= 5900 )
          {
            if ( a5 < 6000 || a5 >= 6004 )
            {
              if ( (unsigned __int8)sub_61D1E0(a5) )
              {
                sub_70FDD0(*(_DWORD *)(v10 + 6392), a3, a4);
                sub_70FDD0(*(_DWORD *)(v10 + 6424), a3 + 35, a4 + 2);
                result = sub_409C20(a3, a4);
              }
              else
              {
                if ( (unsigned __int8)sub_61D220(a5) || (result = sub_61D260(a5), (_BYTE)result) )
                {
                  sub_70FDD0(*(_DWORD *)(v10 + 6368), a3, a4);
                  sub_70FDD0(*(_DWORD *)(v10 + 6224), a3 + 2, a4 + 2);
                  sub_70FDD0(*(_DWORD *)(v10 + 6424), a3 + 35, a4 + 2);
                  goto LABEL_508;
                }
              }
            }
            else
            {
              sub_70FDB0(*(_DWORD *)(v10 + 6384), 0, 0, 50, 93);
              result = sub_70FDD0(*(_DWORD *)(v10 + 6384), a3, a4);
            }
          }
          else
          {
            sub_70FDD0(*(_DWORD *)(v10 + 6380), a3, a4);
            result = sub_409C20(a3, a4);
          }
          return result;
        }
        sub_70FDD0(*(_DWORD *)(v10 + 6376), a3, a4);
        v22 = a8;
        if ( a8 <= 0 )
        {
          sub_70FEC0(a3 + 3, a4 + 2, 9, 15, 1, a8, (unsigned __int64)a8 >> 32, 1, 7, 2, 100);
LABEL_405:
          sub_70FDD0(*(_DWORD *)(v10 + 6528), a3 + 30, a4 + 2);
          return sub_409C20(a3, a4);
        }
        v55 = *(_DWORD *)(v10 + 6408);
LABEL_404:
        sub_409CD0(a3, a4, v22, 2, v55);
        goto LABEL_405;
      }
      if ( (unsigned __int8)sub_61A4B0(a5) || (unsigned __int8)sub_61A4D0(a5) )
      {
        a7 = 6000;
      }
      else
      {
        if ( a7 != 6000 )
        {
          sub_70FDD0(*(_DWORD *)(v10 + 6376), a3, a4);
          if ( a7 <= 0 )
            sub_70FEC0(a3 + 3, a4 + 2, 9, 15, 1, a7, (unsigned __int64)a7 >> 32, 1, 7, 2, 100);
          else
            sub_409CD0(a3, a4, a7, 2, *(_DWORD *)(v10 + 6408));
        }
      }
      if ( a5 == 2009 || a5 == 2011 )
      {
        if ( !dword_80DBCC )
          goto LABEL_374;
        v49 = 100;
        v45 = 0;
        v42 = 9;
        v20 = a6;
        v39 = 0;
        v37 = (unsigned __int64)a6 >> 32;
        v21 = a4 + 69;
      }
      else
      {
        if ( a5 != 2013 && a5 != 2014 && a5 != 2015 && a5 != 2016 && a5 != 2018 && a5 != 2019 && a5 != 2020
          || !*(_DWORD *)(v10 + 5748) )
          goto LABEL_374;
        v49 = 100;
        v45 = 0;
        v42 = 9;
        v20 = a6;
        v39 = 0;
        v37 = (unsigned __int64)a6 >> 32;
        v21 = a4 + 75;
      }
      sub_70FEC0(a3 + 15, v21, 11, 15, 1, v20, v37, v39, v42, v45, v49);
LABEL_374:
      if ( a5 == 2013 || a5 == 2014 )
        goto LABEL_508;
      if ( a5 < 2500 || a5 >= 2600 )
        return sub_409C20(a3, a4);
      return sub_409C50(a3, a4);
    case 3:
    case 4:
    case 5:
      if ( a5 == 4000 )
      {
        sub_70FE70(*(_DWORD *)(v10 + 6368), a3, a4, v54);
        sub_70FE70(*(_DWORD *)(v10 + 6124), a3 + 2, a4 + 2, v23);
LABEL_295:
        result = *(_DWORD *)(v10 + 6672);
        if ( result < 0 || result >= 9 )
          return result;
        v14 = *(_DWORD *)(v10 + 6128);
LABEL_511:
        if ( v14 )
          result = sub_713340(v14, a3, a4, result);
        return result;
      }
      if ( a5 >= 3100 && a5 < 3110 )
      {
        v24 = a5;
      }
      else
      {
        v24 = a5;
        if ( !(unsigned __int8)sub_61D320(a5) && !(unsigned __int8)sub_61D650(a5) && !(unsigned __int8)sub_61D6B0(a5) )
        {
          if ( (unsigned __int8)sub_61D600(a5) )
          {
            sub_70FE70(*(_DWORD *)(v10 + 6444), a3, a4, v54);
            sub_409CD0(a3, a4, a7, 4, *(_DWORD *)(v10 + 6412));
            return sub_409C20(a3, a4);
          }
          if ( a5 >= 4100 && a5 < 5000 )
          {
            sub_70FE70(*(_DWORD *)(v10 + 6388), a3, a4, v54);
            return sub_409C50(a3, a4);
          }
          if ( a5 >= 1000 && a5 < 2000 || a5 >= 3000 && a5 < 4000 || (unsigned __int8)sub_61D2A0(a5) )
          {
            if ( a5 < 3000 )
            {
              if ( a5 < 3010 )
              {
                if ( a5 < 3020 )
                {
                  if ( a5 < 3030 )
                  {
                    if ( a5 < 3040 )
                    {
                      if ( a5 < 3050 )
                      {
                        if ( a5 < 3060 )
                          goto LABEL_444;
                        goto LABEL_442;
                      }
LABEL_439:
                      if ( a5 < 3060 )
                      {
                        a7 = 45;
                        goto LABEL_445;
                      }
LABEL_442:
                      if ( a5 < 3070 )
                      {
                        a7 = 999;
                        goto LABEL_445;
                      }
LABEL_444:
                      if ( a7 > 0 )
                      {
LABEL_445:
                        sub_70FE70(*(_DWORD *)(v10 + 6368), a3, a4, v54);
                        sub_409CD0(a3, a4, a7, 4, *(_DWORD *)(v10 + 6404));
                        if ( (unsigned __int8)sub_61D500(a5) )
                        {
                          sub_70FE70(*(_DWORD *)(v10 + 6432), a3 + 29, a4 + 2, v54);
                          sub_409C20(a3, a4);
                        }
                        else
                        {
                          if ( a8 )
                            sub_70FE70(*(_DWORD *)(v10 + 6424), a3 + 35, a4 + 2, v54);
                          sub_409C20(a3, a4);
                        }
                        goto LABEL_455;
                      }
                      sub_70FDD0(*(_DWORD *)(v10 + 6372), a3, a4);
                      if ( (unsigned __int8)sub_61D500(a5) )
                      {
                        v25 = *(_DWORD *)(v10 + 6428);
                        v50 = a4 + 2;
                        v26 = a3 + 29;
                      }
                      else
                      {
                        if ( !a8 )
                          goto LABEL_455;
                        v50 = a4 + 2;
                        v25 = *(_DWORD *)(v10 + 6420);
                        v26 = a3 + 35;
                      }
                      sub_70FE70(v25, v26, v50, v54);
LABEL_455:
                      result = sub_61D2A0(a5);
                      if ( (_BYTE)result )
                      {
                        v27 = *(_DWORD *)(v10 + 6528);
                        v28 = a3 + 30;
                        if ( a8 )
                          result = sub_70FE70(v27, v28, a4 + 18, v54);
                        else
                          result = sub_70FE70(v27, v28, a4 + 2, v54);
                      }
                      return result;
                    }
LABEL_436:
                    if ( a5 < 3050 )
                    {
                      a7 = 3;
                      goto LABEL_445;
                    }
                    goto LABEL_439;
                  }
LABEL_433:
                  if ( a5 < 3040 )
                  {
                    a7 = 1;
                    goto LABEL_445;
                  }
                  goto LABEL_436;
                }
LABEL_430:
                if ( a5 < 3030 )
                {
                  a7 = 425;
                  goto LABEL_445;
                }
                goto LABEL_433;
              }
            }
            else
            {
              if ( a5 < 3010 )
              {
                a7 = 30;
                goto LABEL_445;
              }
            }
            if ( a5 < 3020 )
            {
              a7 = 365;
              goto LABEL_445;
            }
            goto LABEL_430;
          }
          if ( (unsigned __int8)sub_61D610(a5) || (unsigned __int8)sub_61D2E0(a5) )
          {
            sub_70FE70(*(_DWORD *)(v10 + 6376), a3, a4, v54);
            sub_409CD0(a3, a4, a7, 4, *(_DWORD *)(v10 + 6408));
            v53 = a4 + 2;
LABEL_523:
            v32 = *(_DWORD *)(v10 + 6528);
            v33 = a3 + 30;
LABEL_524:
            sub_70FE70(v32, v33, v53, v54);
            return sub_409C20(a3, a4);
          }
          if ( a5 >= 2000 && a5 < 3000 )
          {
            if ( (unsigned __int8)sub_61A4B0(a5) || (unsigned __int8)sub_61A4D0(a5) )
            {
              a7 = 6000;
            }
            else
            {
              if ( a7 != 6000 )
              {
                sub_70FE70(*(_DWORD *)(v10 + 6376), a3, a4, v54);
                if ( a7 <= 0 )
                  sub_70FEC0(a3 + 3, a4 + 2, 9, 15, 1, 0, 0, 1, 7, 4, 100);
                else
                  sub_409CD0(a3, a4, a7, 4, *(_DWORD *)(v10 + 6408));
              }
            }
            if ( a5 == 2009 || a5 == 2011 )
            {
              if ( dword_80DBCC )
              {
                v51 = 100;
                v46 = 4;
                v43 = 9;
                v40 = 0;
                v36 = a6;
                v29 = a4 + 69;
                v30 = a3 + 15;
                goto LABEL_483;
              }
            }
            else
            {
              if ( (a5 == 2013 || a5 == 2014 || a5 == 2015 || a5 == 2016 || a5 == 2018 || a5 == 2019 || a5 == 2020)
                && *(_DWORD *)(v10 + 5748) )
              {
                v51 = 100;
                v46 = 0;
                v43 = 9;
                v40 = 0;
                v36 = a6;
                v29 = a4 + 75;
                v30 = a3 + 27;
LABEL_483:
                sub_70FEC0(v30, v29, 11, 15, 1, v36, HIDWORD(v36), v40, v43, v46, v51);
                goto LABEL_484;
              }
            }
LABEL_484:
            if ( a5 == 2013 || a5 == 2014 || a5 == 2015 || a5 == 2016 || a5 == 2018 || a5 == 2019 || a5 == 2020 )
            {
LABEL_508:
              result = *(_DWORD *)(v10 + 6672);
              if ( result < 0 || result >= 9 )
                return result;
              v14 = *(_DWORD *)(v10 + 6228);
              goto LABEL_511;
            }
            return sub_409C20(a3, a4);
          }
          if ( a5 < 5900 || a5 >= 6000 )
          {
            if ( a5 < 5000 || a5 >= 5900 )
            {
              if ( a5 >= 6000 && a5 < 6004 )
              {
                sub_70FDB0(*(_DWORD *)(v10 + 6384), 0, 0, 50, 93);
                return sub_70FE70(*(_DWORD *)(v10 + 6384), a3, a4, v54);
              }
              if ( !(unsigned __int8)sub_61D1E0(a5) )
              {
                if ( !(unsigned __int8)sub_61D220(a5) )
                {
                  result = sub_61D260(a5);
                  if ( !(_BYTE)result )
                    return result;
                }
                sub_70FE70(*(_DWORD *)(v10 + 6368), a3, a4, v54);
                sub_70FE70(*(_DWORD *)(v10 + 6224), a3 + 2, a4 + 2, v34);
                sub_70FE70(*(_DWORD *)(v10 + 6424), a3 + 35, a4 + 2, v35);
                goto LABEL_508;
              }
              sub_70FE70(*(_DWORD *)(v10 + 6392), a3, a4, v54);
              v32 = *(_DWORD *)(v10 + 6424);
              v53 = a4 + 2;
              v33 = a3 + 35;
            }
            else
            {
              v32 = *(_DWORD *)(v10 + 6380);
              v53 = a4;
              v33 = a3;
            }
            goto LABEL_524;
          }
          sub_70FE70(*(_DWORD *)(v10 + 6376), a3, a4, v54);
          v31 = a7;
          if ( a7 <= 0 )
          {
            sub_70FEC0(a3 + 3, a4 + 2, 9, 15, 1, 0, 0, 1, 7, 4, 100);
LABEL_522:
            v53 = a4 + 2;
            goto LABEL_523;
          }
          v52 = *(_DWORD *)(v10 + 6408);
LABEL_521:
          sub_409CD0(a3, a4, v31, 4, v52);
          goto LABEL_522;
        }
      }
      if ( (unsigned __int8)sub_61D650(v24) || (unsigned __int8)sub_61D6B0(v24) )
      {
        a7 = a6;
      }
      else
      {
        if ( !(unsigned __int8)sub_61D470(&a7, v24) )
          a7 = 7;
      }
      sub_70FE70(*(_DWORD *)(v10 + 6368), a3, a4, v54);
      v31 = a7;
      v52 = *(_DWORD *)(v10 + 6404);
      goto LABEL_521;
  }
}
