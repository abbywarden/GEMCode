void Eff_ME11_Strips_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 12:50:24 2019) by ROOT version 6.14/09
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
   
   TH1F *base__9 = new TH1F("base__9","",25,1.6,2.4);
   base__9->SetMinimum(0.5);
   base__9->SetMaximum(1.025);
   base__9->SetLineStyle(0);
   base__9->SetMarkerStyle(20);
   base__9->GetXaxis()->SetTitle("True muon |#eta|");
   base__9->GetXaxis()->SetLabelFont(42);
   base__9->GetXaxis()->SetLabelOffset(0.007);
   base__9->GetXaxis()->SetLabelSize(0.05);
   base__9->GetXaxis()->SetTitleSize(0.06);
   base__9->GetXaxis()->SetTitleOffset(0.9);
   base__9->GetXaxis()->SetTitleFont(42);
   base__9->GetYaxis()->SetTitle("Efficiency");
   base__9->GetYaxis()->SetLabelFont(42);
   base__9->GetYaxis()->SetLabelOffset(0.007);
   base__9->GetYaxis()->SetLabelSize(0.05);
   base__9->GetYaxis()->SetTitleSize(0.06);
   base__9->GetYaxis()->SetTitleOffset(0.9);
   base__9->GetYaxis()->SetTitleFont(42);
   base__9->GetZaxis()->SetLabelFont(42);
   base__9->GetZaxis()->SetLabelOffset(0.007);
   base__9->GetZaxis()->SetLabelSize(0.05);
   base__9->GetZaxis()->SetTitleSize(0.06);
   base__9->GetZaxis()->SetTitleFont(42);
   base__9->Draw("");
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
   
   TEfficiency * den_clone35 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone35->SetConfidenceLevel(0.6826895);
   den_clone35->SetBetaAlpha(1);
   den_clone35->SetBetaBeta(1);
   den_clone35->SetWeight(1);
   den_clone35->SetStatisticOption(0);
   den_clone35->SetPosteriorMode(0);
   den_clone35->SetShortestInterval(0);
   den_clone35->SetTotalEvents(0,0);
   den_clone35->SetPassedEvents(0,0);
   den_clone35->SetTotalEvents(1,1860);
   den_clone35->SetPassedEvents(1,1834);
   den_clone35->SetTotalEvents(2,2223);
   den_clone35->SetPassedEvents(2,2223);
   den_clone35->SetTotalEvents(3,2260);
   den_clone35->SetPassedEvents(3,2257);
   den_clone35->SetTotalEvents(4,2055);
   den_clone35->SetPassedEvents(4,2051);
   den_clone35->SetTotalEvents(5,2254);
   den_clone35->SetPassedEvents(5,2249);
   den_clone35->SetTotalEvents(6,2037);
   den_clone35->SetPassedEvents(6,2032);
   den_clone35->SetTotalEvents(7,2177);
   den_clone35->SetPassedEvents(7,2171);
   den_clone35->SetTotalEvents(8,2314);
   den_clone35->SetPassedEvents(8,2308);
   den_clone35->SetTotalEvents(9,2115);
   den_clone35->SetPassedEvents(9,2111);
   den_clone35->SetTotalEvents(10,2253);
   den_clone35->SetPassedEvents(10,2253);
   den_clone35->SetTotalEvents(11,2272);
   den_clone35->SetPassedEvents(11,2266);
   den_clone35->SetTotalEvents(12,2195);
   den_clone35->SetPassedEvents(12,2187);
   den_clone35->SetTotalEvents(13,2180);
   den_clone35->SetPassedEvents(13,2174);
   den_clone35->SetTotalEvents(14,2208);
   den_clone35->SetPassedEvents(14,2200);
   den_clone35->SetTotalEvents(15,2245);
   den_clone35->SetPassedEvents(15,2225);
   den_clone35->SetTotalEvents(16,2228);
   den_clone35->SetPassedEvents(16,2216);
   den_clone35->SetTotalEvents(17,2213);
   den_clone35->SetPassedEvents(17,2198);
   den_clone35->SetTotalEvents(18,2192);
   den_clone35->SetPassedEvents(18,2185);
   den_clone35->SetTotalEvents(19,2248);
   den_clone35->SetPassedEvents(19,2245);
   den_clone35->SetTotalEvents(20,2187);
   den_clone35->SetPassedEvents(20,2179);
   den_clone35->SetTotalEvents(21,2152);
   den_clone35->SetPassedEvents(21,2146);
   den_clone35->SetTotalEvents(22,2232);
   den_clone35->SetPassedEvents(22,2223);
   den_clone35->SetTotalEvents(23,2231);
   den_clone35->SetPassedEvents(23,2218);
   den_clone35->SetTotalEvents(24,2085);
   den_clone35->SetPassedEvents(24,2075);
   den_clone35->SetTotalEvents(25,2167);
   den_clone35->SetPassedEvents(25,2129);
   den_clone35->SetTotalEvents(26,0);
   den_clone35->SetPassedEvents(26,0);
   den_clone35->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone35->SetLineColor(ci);
   den_clone35->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone35->SetMarkerColor(ci);
   den_clone35->SetMarkerStyle(23);
   den_clone35->Draw("same samep");
   
   TEfficiency * den_clone36 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone36->SetConfidenceLevel(0.6826895);
   den_clone36->SetBetaAlpha(1);
   den_clone36->SetBetaBeta(1);
   den_clone36->SetWeight(1);
   den_clone36->SetStatisticOption(0);
   den_clone36->SetPosteriorMode(0);
   den_clone36->SetShortestInterval(0);
   den_clone36->SetTotalEvents(0,0);
   den_clone36->SetPassedEvents(0,0);
   den_clone36->SetTotalEvents(1,1860);
   den_clone36->SetPassedEvents(1,1834);
   den_clone36->SetTotalEvents(2,2223);
   den_clone36->SetPassedEvents(2,2223);
   den_clone36->SetTotalEvents(3,2260);
   den_clone36->SetPassedEvents(3,2257);
   den_clone36->SetTotalEvents(4,2055);
   den_clone36->SetPassedEvents(4,2051);
   den_clone36->SetTotalEvents(5,2254);
   den_clone36->SetPassedEvents(5,2249);
   den_clone36->SetTotalEvents(6,2037);
   den_clone36->SetPassedEvents(6,2032);
   den_clone36->SetTotalEvents(7,2177);
   den_clone36->SetPassedEvents(7,2171);
   den_clone36->SetTotalEvents(8,2314);
   den_clone36->SetPassedEvents(8,2308);
   den_clone36->SetTotalEvents(9,2115);
   den_clone36->SetPassedEvents(9,2111);
   den_clone36->SetTotalEvents(10,2253);
   den_clone36->SetPassedEvents(10,2253);
   den_clone36->SetTotalEvents(11,2272);
   den_clone36->SetPassedEvents(11,2266);
   den_clone36->SetTotalEvents(12,2195);
   den_clone36->SetPassedEvents(12,2187);
   den_clone36->SetTotalEvents(13,2180);
   den_clone36->SetPassedEvents(13,2174);
   den_clone36->SetTotalEvents(14,2208);
   den_clone36->SetPassedEvents(14,2200);
   den_clone36->SetTotalEvents(15,2245);
   den_clone36->SetPassedEvents(15,2225);
   den_clone36->SetTotalEvents(16,2228);
   den_clone36->SetPassedEvents(16,2216);
   den_clone36->SetTotalEvents(17,2213);
   den_clone36->SetPassedEvents(17,2198);
   den_clone36->SetTotalEvents(18,2192);
   den_clone36->SetPassedEvents(18,2185);
   den_clone36->SetTotalEvents(19,2248);
   den_clone36->SetPassedEvents(19,2245);
   den_clone36->SetTotalEvents(20,2187);
   den_clone36->SetPassedEvents(20,2179);
   den_clone36->SetTotalEvents(21,2152);
   den_clone36->SetPassedEvents(21,2146);
   den_clone36->SetTotalEvents(22,2232);
   den_clone36->SetPassedEvents(22,2223);
   den_clone36->SetTotalEvents(23,2231);
   den_clone36->SetPassedEvents(23,2218);
   den_clone36->SetTotalEvents(24,2085);
   den_clone36->SetPassedEvents(24,2075);
   den_clone36->SetTotalEvents(25,2167);
   den_clone36->SetPassedEvents(25,2129);
   den_clone36->SetTotalEvents(26,0);
   den_clone36->SetPassedEvents(26,0);
   den_clone36->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone36->SetLineColor(ci);
   den_clone36->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone36->SetMarkerColor(ci);
   den_clone36->SetMarkerStyle(22);
   den_clone36->Draw("same samep");
   
   TEfficiency * den_clone37 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone37->SetConfidenceLevel(0.6826895);
   den_clone37->SetBetaAlpha(1);
   den_clone37->SetBetaBeta(1);
   den_clone37->SetWeight(1);
   den_clone37->SetStatisticOption(0);
   den_clone37->SetPosteriorMode(0);
   den_clone37->SetShortestInterval(0);
   den_clone37->SetTotalEvents(0,0);
   den_clone37->SetPassedEvents(0,0);
   den_clone37->SetTotalEvents(1,1860);
   den_clone37->SetPassedEvents(1,1834);
   den_clone37->SetTotalEvents(2,2223);
   den_clone37->SetPassedEvents(2,2223);
   den_clone37->SetTotalEvents(3,2260);
   den_clone37->SetPassedEvents(3,2257);
   den_clone37->SetTotalEvents(4,2055);
   den_clone37->SetPassedEvents(4,2051);
   den_clone37->SetTotalEvents(5,2254);
   den_clone37->SetPassedEvents(5,2249);
   den_clone37->SetTotalEvents(6,2037);
   den_clone37->SetPassedEvents(6,2032);
   den_clone37->SetTotalEvents(7,2177);
   den_clone37->SetPassedEvents(7,2171);
   den_clone37->SetTotalEvents(8,2314);
   den_clone37->SetPassedEvents(8,2308);
   den_clone37->SetTotalEvents(9,2115);
   den_clone37->SetPassedEvents(9,2111);
   den_clone37->SetTotalEvents(10,2253);
   den_clone37->SetPassedEvents(10,2253);
   den_clone37->SetTotalEvents(11,2272);
   den_clone37->SetPassedEvents(11,2266);
   den_clone37->SetTotalEvents(12,2195);
   den_clone37->SetPassedEvents(12,2187);
   den_clone37->SetTotalEvents(13,2180);
   den_clone37->SetPassedEvents(13,2174);
   den_clone37->SetTotalEvents(14,2208);
   den_clone37->SetPassedEvents(14,2200);
   den_clone37->SetTotalEvents(15,2245);
   den_clone37->SetPassedEvents(15,2225);
   den_clone37->SetTotalEvents(16,2228);
   den_clone37->SetPassedEvents(16,2216);
   den_clone37->SetTotalEvents(17,2213);
   den_clone37->SetPassedEvents(17,2198);
   den_clone37->SetTotalEvents(18,2192);
   den_clone37->SetPassedEvents(18,2185);
   den_clone37->SetTotalEvents(19,2248);
   den_clone37->SetPassedEvents(19,2245);
   den_clone37->SetTotalEvents(20,2187);
   den_clone37->SetPassedEvents(20,2179);
   den_clone37->SetTotalEvents(21,2152);
   den_clone37->SetPassedEvents(21,2146);
   den_clone37->SetTotalEvents(22,2232);
   den_clone37->SetPassedEvents(22,2223);
   den_clone37->SetTotalEvents(23,2231);
   den_clone37->SetPassedEvents(23,2218);
   den_clone37->SetTotalEvents(24,2085);
   den_clone37->SetPassedEvents(24,2075);
   den_clone37->SetTotalEvents(25,2167);
   den_clone37->SetPassedEvents(25,2129);
   den_clone37->SetTotalEvents(26,0);
   den_clone37->SetPassedEvents(26,0);
   den_clone37->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone37->SetLineColor(ci);
   den_clone37->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone37->SetMarkerColor(ci);
   den_clone37->SetMarkerStyle(21);
   den_clone37->Draw("same samep");
   
   TEfficiency * den_clone38 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone38->SetConfidenceLevel(0.6826895);
   den_clone38->SetBetaAlpha(1);
   den_clone38->SetBetaBeta(1);
   den_clone38->SetWeight(1);
   den_clone38->SetStatisticOption(0);
   den_clone38->SetPosteriorMode(0);
   den_clone38->SetShortestInterval(0);
   den_clone38->SetTotalEvents(0,0);
   den_clone38->SetPassedEvents(0,0);
   den_clone38->SetTotalEvents(1,649);
   den_clone38->SetPassedEvents(1,644);
   den_clone38->SetTotalEvents(2,778);
   den_clone38->SetPassedEvents(2,777);
   den_clone38->SetTotalEvents(3,852);
   den_clone38->SetPassedEvents(3,852);
   den_clone38->SetTotalEvents(4,778);
   den_clone38->SetPassedEvents(4,777);
   den_clone38->SetTotalEvents(5,791);
   den_clone38->SetPassedEvents(5,790);
   den_clone38->SetTotalEvents(6,783);
   den_clone38->SetPassedEvents(6,783);
   den_clone38->SetTotalEvents(7,878);
   den_clone38->SetPassedEvents(7,875);
   den_clone38->SetTotalEvents(8,848);
   den_clone38->SetPassedEvents(8,847);
   den_clone38->SetTotalEvents(9,761);
   den_clone38->SetPassedEvents(9,760);
   den_clone38->SetTotalEvents(10,759);
   den_clone38->SetPassedEvents(10,757);
   den_clone38->SetTotalEvents(11,773);
   den_clone38->SetPassedEvents(11,772);
   den_clone38->SetTotalEvents(12,785);
   den_clone38->SetPassedEvents(12,784);
   den_clone38->SetTotalEvents(13,796);
   den_clone38->SetPassedEvents(13,794);
   den_clone38->SetTotalEvents(14,762);
   den_clone38->SetPassedEvents(14,760);
   den_clone38->SetTotalEvents(15,770);
   den_clone38->SetPassedEvents(15,763);
   den_clone38->SetTotalEvents(16,782);
   den_clone38->SetPassedEvents(16,777);
   den_clone38->SetTotalEvents(17,787);
   den_clone38->SetPassedEvents(17,774);
   den_clone38->SetTotalEvents(18,768);
   den_clone38->SetPassedEvents(18,766);
   den_clone38->SetTotalEvents(19,816);
   den_clone38->SetPassedEvents(19,814);
   den_clone38->SetTotalEvents(20,795);
   den_clone38->SetPassedEvents(20,795);
   den_clone38->SetTotalEvents(21,752);
   den_clone38->SetPassedEvents(21,750);
   den_clone38->SetTotalEvents(22,862);
   den_clone38->SetPassedEvents(22,859);
   den_clone38->SetTotalEvents(23,740);
   den_clone38->SetPassedEvents(23,739);
   den_clone38->SetTotalEvents(24,855);
   den_clone38->SetPassedEvents(24,848);
   den_clone38->SetTotalEvents(25,724);
   den_clone38->SetPassedEvents(25,709);
   den_clone38->SetTotalEvents(26,0);
   den_clone38->SetPassedEvents(26,0);
   den_clone38->SetFillColor(19);
   den_clone38->SetLineWidth(2);
   den_clone38->SetMarkerStyle(24);
   den_clone38->Draw("same samep");
   
   TEfficiency * den_clone39 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone39->SetConfidenceLevel(0.6826895);
   den_clone39->SetBetaAlpha(1);
   den_clone39->SetBetaBeta(1);
   den_clone39->SetWeight(1);
   den_clone39->SetStatisticOption(0);
   den_clone39->SetPosteriorMode(0);
   den_clone39->SetShortestInterval(0);
   den_clone39->SetTotalEvents(0,0);
   den_clone39->SetPassedEvents(0,0);
   den_clone39->SetTotalEvents(1,1726);
   den_clone39->SetPassedEvents(1,1703);
   den_clone39->SetTotalEvents(2,2251);
   den_clone39->SetPassedEvents(2,2251);
   den_clone39->SetTotalEvents(3,2146);
   den_clone39->SetPassedEvents(3,2146);
   den_clone39->SetTotalEvents(4,2364);
   den_clone39->SetPassedEvents(4,2362);
   den_clone39->SetTotalEvents(5,2042);
   den_clone39->SetPassedEvents(5,2042);
   den_clone39->SetTotalEvents(6,2277);
   den_clone39->SetPassedEvents(6,2277);
   den_clone39->SetTotalEvents(7,2245);
   den_clone39->SetPassedEvents(7,2243);
   den_clone39->SetTotalEvents(8,2209);
   den_clone39->SetPassedEvents(8,2208);
   den_clone39->SetTotalEvents(9,2201);
   den_clone39->SetPassedEvents(9,2196);
   den_clone39->SetTotalEvents(10,2142);
   den_clone39->SetPassedEvents(10,2140);
   den_clone39->SetTotalEvents(11,2306);
   den_clone39->SetPassedEvents(11,2302);
   den_clone39->SetTotalEvents(12,2234);
   den_clone39->SetPassedEvents(12,2233);
   den_clone39->SetTotalEvents(13,2243);
   den_clone39->SetPassedEvents(13,2243);
   den_clone39->SetTotalEvents(14,2176);
   den_clone39->SetPassedEvents(14,2169);
   den_clone39->SetTotalEvents(15,2028);
   den_clone39->SetPassedEvents(15,2015);
   den_clone39->SetTotalEvents(16,2122);
   den_clone39->SetPassedEvents(16,2120);
   den_clone39->SetTotalEvents(17,2217);
   den_clone39->SetPassedEvents(17,2201);
   den_clone39->SetTotalEvents(18,2286);
   den_clone39->SetPassedEvents(18,2282);
   den_clone39->SetTotalEvents(19,2196);
   den_clone39->SetPassedEvents(19,2190);
   den_clone39->SetTotalEvents(20,2320);
   den_clone39->SetPassedEvents(20,2315);
   den_clone39->SetTotalEvents(21,2255);
   den_clone39->SetPassedEvents(21,2252);
   den_clone39->SetTotalEvents(22,2161);
   den_clone39->SetPassedEvents(22,2157);
   den_clone39->SetTotalEvents(23,2310);
   den_clone39->SetPassedEvents(23,2303);
   den_clone39->SetTotalEvents(24,2195);
   den_clone39->SetPassedEvents(24,2189);
   den_clone39->SetTotalEvents(25,2187);
   den_clone39->SetPassedEvents(25,2152);
   den_clone39->SetTotalEvents(26,0);
   den_clone39->SetPassedEvents(26,0);
   den_clone39->SetFillColor(19);

   ci = TColor::GetColor("#ff00ff");
   den_clone39->SetLineColor(ci);
   den_clone39->SetLineWidth(2);

   ci = TColor::GetColor("#ff00ff");
   den_clone39->SetMarkerColor(ci);
   den_clone39->SetMarkerStyle(24);
   den_clone39->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME1/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"Strips");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
