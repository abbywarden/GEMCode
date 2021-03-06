void Eff_ME21_Strips_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 12:51:04 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.485714,0.42125,2.438095,1.0775);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.04);
   c->SetTopMargin(0.08);
   c->SetBottomMargin(0.12);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   
   TH1F *base__44 = new TH1F("base__44","",25,1.6,2.4);
   base__44->SetMinimum(0.5);
   base__44->SetMaximum(1.025);
   base__44->SetLineStyle(0);
   base__44->SetMarkerStyle(20);
   base__44->GetXaxis()->SetTitle("True muon |#eta|");
   base__44->GetXaxis()->SetLabelFont(42);
   base__44->GetXaxis()->SetLabelOffset(0.007);
   base__44->GetXaxis()->SetLabelSize(0.05);
   base__44->GetXaxis()->SetTitleSize(0.06);
   base__44->GetXaxis()->SetTitleOffset(0.9);
   base__44->GetXaxis()->SetTitleFont(42);
   base__44->GetYaxis()->SetTitle("Efficiency");
   base__44->GetYaxis()->SetLabelFont(42);
   base__44->GetYaxis()->SetLabelOffset(0.007);
   base__44->GetYaxis()->SetLabelSize(0.05);
   base__44->GetYaxis()->SetTitleSize(0.06);
   base__44->GetYaxis()->SetTitleOffset(0.9);
   base__44->GetYaxis()->SetTitleFont(42);
   base__44->GetZaxis()->SetLabelFont(42);
   base__44->GetZaxis()->SetLabelOffset(0.007);
   base__44->GetZaxis()->SetLabelSize(0.05);
   base__44->GetZaxis()->SetTitleSize(0.06);
   base__44->GetZaxis()->SetTitleFont(42);
   base__44->Draw("");
   TLatex *   tex = new TLatex(0.96,0.936,"14 TeV");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.048);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.12,0.936,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2208,0.936,"Simulation Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TEfficiency * den_clone180 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone180->SetConfidenceLevel(0.6826895);
   den_clone180->SetBetaAlpha(1);
   den_clone180->SetBetaBeta(1);
   den_clone180->SetWeight(1);
   den_clone180->SetStatisticOption(0);
   den_clone180->SetPosteriorMode(0);
   den_clone180->SetShortestInterval(0);
   den_clone180->SetTotalEvents(0,0);
   den_clone180->SetPassedEvents(0,0);
   den_clone180->SetTotalEvents(1,815);
   den_clone180->SetPassedEvents(1,783);
   den_clone180->SetTotalEvents(2,1938);
   den_clone180->SetPassedEvents(2,1916);
   den_clone180->SetTotalEvents(3,2262);
   den_clone180->SetPassedEvents(3,2258);
   den_clone180->SetTotalEvents(4,2057);
   den_clone180->SetPassedEvents(4,2053);
   den_clone180->SetTotalEvents(5,2257);
   den_clone180->SetPassedEvents(5,2253);
   den_clone180->SetTotalEvents(6,2038);
   den_clone180->SetPassedEvents(6,2026);
   den_clone180->SetTotalEvents(7,2180);
   den_clone180->SetPassedEvents(7,2114);
   den_clone180->SetTotalEvents(8,2318);
   den_clone180->SetPassedEvents(8,2263);
   den_clone180->SetTotalEvents(9,2116);
   den_clone180->SetPassedEvents(9,2114);
   den_clone180->SetTotalEvents(10,2256);
   den_clone180->SetPassedEvents(10,2255);
   den_clone180->SetTotalEvents(11,2269);
   den_clone180->SetPassedEvents(11,2269);
   den_clone180->SetTotalEvents(12,2195);
   den_clone180->SetPassedEvents(12,2193);
   den_clone180->SetTotalEvents(13,2180);
   den_clone180->SetPassedEvents(13,2174);
   den_clone180->SetTotalEvents(14,2109);
   den_clone180->SetPassedEvents(14,1982);
   den_clone180->SetTotalEvents(15,2089);
   den_clone180->SetPassedEvents(15,1936);
   den_clone180->SetTotalEvents(16,2216);
   den_clone180->SetPassedEvents(16,2197);
   den_clone180->SetTotalEvents(17,2214);
   den_clone180->SetPassedEvents(17,2208);
   den_clone180->SetTotalEvents(18,2194);
   den_clone180->SetPassedEvents(18,2190);
   den_clone180->SetTotalEvents(19,2250);
   den_clone180->SetPassedEvents(19,2245);
   den_clone180->SetTotalEvents(20,2188);
   den_clone180->SetPassedEvents(20,2183);
   den_clone180->SetTotalEvents(21,2154);
   den_clone180->SetPassedEvents(21,2153);
   den_clone180->SetTotalEvents(22,2232);
   den_clone180->SetPassedEvents(22,2228);
   den_clone180->SetTotalEvents(23,2234);
   den_clone180->SetPassedEvents(23,2226);
   den_clone180->SetTotalEvents(24,2084);
   den_clone180->SetPassedEvents(24,2077);
   den_clone180->SetTotalEvents(25,2196);
   den_clone180->SetPassedEvents(25,2180);
   den_clone180->SetTotalEvents(26,0);
   den_clone180->SetPassedEvents(26,0);
   den_clone180->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone180->SetLineColor(ci);
   den_clone180->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone180->SetMarkerColor(ci);
   den_clone180->SetMarkerStyle(23);
   den_clone180->Draw("same samep");
   
   TEfficiency * den_clone181 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone181->SetConfidenceLevel(0.6826895);
   den_clone181->SetBetaAlpha(1);
   den_clone181->SetBetaBeta(1);
   den_clone181->SetWeight(1);
   den_clone181->SetStatisticOption(0);
   den_clone181->SetPosteriorMode(0);
   den_clone181->SetShortestInterval(0);
   den_clone181->SetTotalEvents(0,0);
   den_clone181->SetPassedEvents(0,0);
   den_clone181->SetTotalEvents(1,815);
   den_clone181->SetPassedEvents(1,783);
   den_clone181->SetTotalEvents(2,1938);
   den_clone181->SetPassedEvents(2,1916);
   den_clone181->SetTotalEvents(3,2262);
   den_clone181->SetPassedEvents(3,2258);
   den_clone181->SetTotalEvents(4,2057);
   den_clone181->SetPassedEvents(4,2053);
   den_clone181->SetTotalEvents(5,2257);
   den_clone181->SetPassedEvents(5,2253);
   den_clone181->SetTotalEvents(6,2038);
   den_clone181->SetPassedEvents(6,2026);
   den_clone181->SetTotalEvents(7,2180);
   den_clone181->SetPassedEvents(7,2114);
   den_clone181->SetTotalEvents(8,2318);
   den_clone181->SetPassedEvents(8,2263);
   den_clone181->SetTotalEvents(9,2116);
   den_clone181->SetPassedEvents(9,2114);
   den_clone181->SetTotalEvents(10,2256);
   den_clone181->SetPassedEvents(10,2255);
   den_clone181->SetTotalEvents(11,2269);
   den_clone181->SetPassedEvents(11,2269);
   den_clone181->SetTotalEvents(12,2195);
   den_clone181->SetPassedEvents(12,2193);
   den_clone181->SetTotalEvents(13,2180);
   den_clone181->SetPassedEvents(13,2174);
   den_clone181->SetTotalEvents(14,2109);
   den_clone181->SetPassedEvents(14,1982);
   den_clone181->SetTotalEvents(15,2089);
   den_clone181->SetPassedEvents(15,1936);
   den_clone181->SetTotalEvents(16,2216);
   den_clone181->SetPassedEvents(16,2197);
   den_clone181->SetTotalEvents(17,2214);
   den_clone181->SetPassedEvents(17,2208);
   den_clone181->SetTotalEvents(18,2194);
   den_clone181->SetPassedEvents(18,2190);
   den_clone181->SetTotalEvents(19,2250);
   den_clone181->SetPassedEvents(19,2245);
   den_clone181->SetTotalEvents(20,2188);
   den_clone181->SetPassedEvents(20,2183);
   den_clone181->SetTotalEvents(21,2154);
   den_clone181->SetPassedEvents(21,2153);
   den_clone181->SetTotalEvents(22,2232);
   den_clone181->SetPassedEvents(22,2228);
   den_clone181->SetTotalEvents(23,2234);
   den_clone181->SetPassedEvents(23,2226);
   den_clone181->SetTotalEvents(24,2084);
   den_clone181->SetPassedEvents(24,2077);
   den_clone181->SetTotalEvents(25,2196);
   den_clone181->SetPassedEvents(25,2180);
   den_clone181->SetTotalEvents(26,0);
   den_clone181->SetPassedEvents(26,0);
   den_clone181->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone181->SetLineColor(ci);
   den_clone181->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone181->SetMarkerColor(ci);
   den_clone181->SetMarkerStyle(22);
   den_clone181->Draw("same samep");
   
   TEfficiency * den_clone182 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone182->SetConfidenceLevel(0.6826895);
   den_clone182->SetBetaAlpha(1);
   den_clone182->SetBetaBeta(1);
   den_clone182->SetWeight(1);
   den_clone182->SetStatisticOption(0);
   den_clone182->SetPosteriorMode(0);
   den_clone182->SetShortestInterval(0);
   den_clone182->SetTotalEvents(0,0);
   den_clone182->SetPassedEvents(0,0);
   den_clone182->SetTotalEvents(1,815);
   den_clone182->SetPassedEvents(1,783);
   den_clone182->SetTotalEvents(2,1938);
   den_clone182->SetPassedEvents(2,1916);
   den_clone182->SetTotalEvents(3,2262);
   den_clone182->SetPassedEvents(3,2258);
   den_clone182->SetTotalEvents(4,2057);
   den_clone182->SetPassedEvents(4,2053);
   den_clone182->SetTotalEvents(5,2257);
   den_clone182->SetPassedEvents(5,2253);
   den_clone182->SetTotalEvents(6,2038);
   den_clone182->SetPassedEvents(6,2026);
   den_clone182->SetTotalEvents(7,2180);
   den_clone182->SetPassedEvents(7,2114);
   den_clone182->SetTotalEvents(8,2318);
   den_clone182->SetPassedEvents(8,2263);
   den_clone182->SetTotalEvents(9,2116);
   den_clone182->SetPassedEvents(9,2114);
   den_clone182->SetTotalEvents(10,2256);
   den_clone182->SetPassedEvents(10,2255);
   den_clone182->SetTotalEvents(11,2269);
   den_clone182->SetPassedEvents(11,2269);
   den_clone182->SetTotalEvents(12,2195);
   den_clone182->SetPassedEvents(12,2193);
   den_clone182->SetTotalEvents(13,2180);
   den_clone182->SetPassedEvents(13,2174);
   den_clone182->SetTotalEvents(14,2109);
   den_clone182->SetPassedEvents(14,1982);
   den_clone182->SetTotalEvents(15,2089);
   den_clone182->SetPassedEvents(15,1936);
   den_clone182->SetTotalEvents(16,2216);
   den_clone182->SetPassedEvents(16,2197);
   den_clone182->SetTotalEvents(17,2214);
   den_clone182->SetPassedEvents(17,2208);
   den_clone182->SetTotalEvents(18,2194);
   den_clone182->SetPassedEvents(18,2190);
   den_clone182->SetTotalEvents(19,2250);
   den_clone182->SetPassedEvents(19,2245);
   den_clone182->SetTotalEvents(20,2188);
   den_clone182->SetPassedEvents(20,2183);
   den_clone182->SetTotalEvents(21,2154);
   den_clone182->SetPassedEvents(21,2153);
   den_clone182->SetTotalEvents(22,2232);
   den_clone182->SetPassedEvents(22,2228);
   den_clone182->SetTotalEvents(23,2234);
   den_clone182->SetPassedEvents(23,2226);
   den_clone182->SetTotalEvents(24,2084);
   den_clone182->SetPassedEvents(24,2077);
   den_clone182->SetTotalEvents(25,2196);
   den_clone182->SetPassedEvents(25,2180);
   den_clone182->SetTotalEvents(26,0);
   den_clone182->SetPassedEvents(26,0);
   den_clone182->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone182->SetLineColor(ci);
   den_clone182->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone182->SetMarkerColor(ci);
   den_clone182->SetMarkerStyle(21);
   den_clone182->Draw("same samep");
   
   TEfficiency * den_clone183 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone183->SetConfidenceLevel(0.6826895);
   den_clone183->SetBetaAlpha(1);
   den_clone183->SetBetaBeta(1);
   den_clone183->SetWeight(1);
   den_clone183->SetStatisticOption(0);
   den_clone183->SetPosteriorMode(0);
   den_clone183->SetShortestInterval(0);
   den_clone183->SetTotalEvents(0,0);
   den_clone183->SetPassedEvents(0,0);
   den_clone183->SetTotalEvents(1,288);
   den_clone183->SetPassedEvents(1,271);
   den_clone183->SetTotalEvents(2,688);
   den_clone183->SetPassedEvents(2,680);
   den_clone183->SetTotalEvents(3,852);
   den_clone183->SetPassedEvents(3,851);
   den_clone183->SetTotalEvents(4,777);
   den_clone183->SetPassedEvents(4,776);
   den_clone183->SetTotalEvents(5,792);
   den_clone183->SetPassedEvents(5,790);
   den_clone183->SetTotalEvents(6,784);
   den_clone183->SetPassedEvents(6,778);
   den_clone183->SetTotalEvents(7,878);
   den_clone183->SetPassedEvents(7,848);
   den_clone183->SetTotalEvents(8,847);
   den_clone183->SetPassedEvents(8,821);
   den_clone183->SetTotalEvents(9,761);
   den_clone183->SetPassedEvents(9,761);
   den_clone183->SetTotalEvents(10,760);
   den_clone183->SetPassedEvents(10,760);
   den_clone183->SetTotalEvents(11,774);
   den_clone183->SetPassedEvents(11,774);
   den_clone183->SetTotalEvents(12,785);
   den_clone183->SetPassedEvents(12,784);
   den_clone183->SetTotalEvents(13,796);
   den_clone183->SetPassedEvents(13,791);
   den_clone183->SetTotalEvents(14,724);
   den_clone183->SetPassedEvents(14,683);
   den_clone183->SetTotalEvents(15,723);
   den_clone183->SetPassedEvents(15,661);
   den_clone183->SetTotalEvents(16,782);
   den_clone183->SetPassedEvents(16,780);
   den_clone183->SetTotalEvents(17,788);
   den_clone183->SetPassedEvents(17,785);
   den_clone183->SetTotalEvents(18,768);
   den_clone183->SetPassedEvents(18,768);
   den_clone183->SetTotalEvents(19,816);
   den_clone183->SetPassedEvents(19,813);
   den_clone183->SetTotalEvents(20,795);
   den_clone183->SetPassedEvents(20,794);
   den_clone183->SetTotalEvents(21,752);
   den_clone183->SetPassedEvents(21,752);
   den_clone183->SetTotalEvents(22,863);
   den_clone183->SetPassedEvents(22,860);
   den_clone183->SetTotalEvents(23,740);
   den_clone183->SetPassedEvents(23,736);
   den_clone183->SetTotalEvents(24,856);
   den_clone183->SetPassedEvents(24,853);
   den_clone183->SetTotalEvents(25,733);
   den_clone183->SetPassedEvents(25,727);
   den_clone183->SetTotalEvents(26,0);
   den_clone183->SetPassedEvents(26,0);
   den_clone183->SetFillColor(19);
   den_clone183->SetLineWidth(2);
   den_clone183->SetMarkerStyle(24);
   den_clone183->Draw("same samep");
   
   TEfficiency * den_clone184 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone184->SetConfidenceLevel(0.6826895);
   den_clone184->SetBetaAlpha(1);
   den_clone184->SetBetaBeta(1);
   den_clone184->SetWeight(1);
   den_clone184->SetStatisticOption(0);
   den_clone184->SetPosteriorMode(0);
   den_clone184->SetShortestInterval(0);
   den_clone184->SetTotalEvents(0,0);
   den_clone184->SetPassedEvents(0,0);
   den_clone184->SetTotalEvents(1,735);
   den_clone184->SetPassedEvents(1,712);
   den_clone184->SetTotalEvents(2,1988);
   den_clone184->SetPassedEvents(2,1960);
   den_clone184->SetTotalEvents(3,2149);
   den_clone184->SetPassedEvents(3,2148);
   den_clone184->SetTotalEvents(4,2366);
   den_clone184->SetPassedEvents(4,2365);
   den_clone184->SetTotalEvents(5,2041);
   den_clone184->SetPassedEvents(5,2039);
   den_clone184->SetTotalEvents(6,2277);
   den_clone184->SetPassedEvents(6,2262);
   den_clone184->SetTotalEvents(7,2246);
   den_clone184->SetPassedEvents(7,2176);
   den_clone184->SetTotalEvents(8,2210);
   den_clone184->SetPassedEvents(8,2168);
   den_clone184->SetTotalEvents(9,2202);
   den_clone184->SetPassedEvents(9,2202);
   den_clone184->SetTotalEvents(10,2144);
   den_clone184->SetPassedEvents(10,2142);
   den_clone184->SetTotalEvents(11,2307);
   den_clone184->SetPassedEvents(11,2303);
   den_clone184->SetTotalEvents(12,2235);
   den_clone184->SetPassedEvents(12,2232);
   den_clone184->SetTotalEvents(13,2241);
   den_clone184->SetPassedEvents(13,2237);
   den_clone184->SetTotalEvents(14,2069);
   den_clone184->SetPassedEvents(14,1918);
   den_clone184->SetTotalEvents(15,1901);
   den_clone184->SetPassedEvents(15,1752);
   den_clone184->SetTotalEvents(16,2116);
   den_clone184->SetPassedEvents(16,2110);
   den_clone184->SetTotalEvents(17,2218);
   den_clone184->SetPassedEvents(17,2217);
   den_clone184->SetTotalEvents(18,2288);
   den_clone184->SetPassedEvents(18,2286);
   den_clone184->SetTotalEvents(19,2198);
   den_clone184->SetPassedEvents(19,2198);
   den_clone184->SetTotalEvents(20,2322);
   den_clone184->SetPassedEvents(20,2320);
   den_clone184->SetTotalEvents(21,2256);
   den_clone184->SetPassedEvents(21,2254);
   den_clone184->SetTotalEvents(22,2163);
   den_clone184->SetPassedEvents(22,2160);
   den_clone184->SetTotalEvents(23,2314);
   den_clone184->SetPassedEvents(23,2309);
   den_clone184->SetTotalEvents(24,2192);
   den_clone184->SetPassedEvents(24,2183);
   den_clone184->SetTotalEvents(25,2217);
   den_clone184->SetPassedEvents(25,2203);
   den_clone184->SetTotalEvents(26,0);
   den_clone184->SetPassedEvents(26,0);
   den_clone184->SetFillColor(19);

   ci = TColor::GetColor("#ff00ff");
   den_clone184->SetLineColor(ci);
   den_clone184->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   den_clone184->SetMarkerColor(ci);
   den_clone184->SetMarkerStyle(24);
   den_clone184->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU200 CSC Run-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU200 CSC Phase-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU200 GEM-CSC","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU300 GEM-CSC","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU0 GEM-CSC","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME2/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"Strips");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
