void Eff_ME21_CLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  8 12:39:41 2019) by ROOT version 6.14/09
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
   
   TH1F *base__29 = new TH1F("base__29","",25,1.6,2.4);
   base__29->SetMinimum(0.5);
   base__29->SetMaximum(1.025);
   base__29->SetLineStyle(0);
   base__29->SetMarkerStyle(20);
   base__29->GetXaxis()->SetTitle("True muon |#eta|");
   base__29->GetXaxis()->SetLabelFont(42);
   base__29->GetXaxis()->SetLabelOffset(0.007);
   base__29->GetXaxis()->SetLabelSize(0.05);
   base__29->GetXaxis()->SetTitleSize(0.06);
   base__29->GetXaxis()->SetTitleOffset(0.9);
   base__29->GetXaxis()->SetTitleFont(42);
   base__29->GetYaxis()->SetTitle("Efficiency");
   base__29->GetYaxis()->SetLabelFont(42);
   base__29->GetYaxis()->SetLabelOffset(0.007);
   base__29->GetYaxis()->SetLabelSize(0.05);
   base__29->GetYaxis()->SetTitleSize(0.06);
   base__29->GetYaxis()->SetTitleOffset(0.9);
   base__29->GetYaxis()->SetTitleFont(42);
   base__29->GetZaxis()->SetLabelFont(42);
   base__29->GetZaxis()->SetLabelOffset(0.007);
   base__29->GetZaxis()->SetLabelSize(0.05);
   base__29->GetZaxis()->SetTitleSize(0.06);
   base__29->GetZaxis()->SetTitleFont(42);
   base__29->Draw("");
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
   
   TEfficiency * den_clone109 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone109->SetConfidenceLevel(0.6826895);
   den_clone109->SetBetaAlpha(1);
   den_clone109->SetBetaBeta(1);
   den_clone109->SetWeight(1);
   den_clone109->SetStatisticOption(0);
   den_clone109->SetPosteriorMode(0);
   den_clone109->SetShortestInterval(0);
   den_clone109->SetTotalEvents(0,0);
   den_clone109->SetPassedEvents(0,0);
   den_clone109->SetTotalEvents(1,735);
   den_clone109->SetPassedEvents(1,573);
   den_clone109->SetTotalEvents(2,1988);
   den_clone109->SetPassedEvents(2,1795);
   den_clone109->SetTotalEvents(3,2149);
   den_clone109->SetPassedEvents(3,2076);
   den_clone109->SetTotalEvents(4,2366);
   den_clone109->SetPassedEvents(4,2283);
   den_clone109->SetTotalEvents(5,2041);
   den_clone109->SetPassedEvents(5,1951);
   den_clone109->SetTotalEvents(6,2277);
   den_clone109->SetPassedEvents(6,2119);
   den_clone109->SetTotalEvents(7,2246);
   den_clone109->SetPassedEvents(7,1740);
   den_clone109->SetTotalEvents(8,2210);
   den_clone109->SetPassedEvents(8,1874);
   den_clone109->SetTotalEvents(9,2202);
   den_clone109->SetPassedEvents(9,2112);
   den_clone109->SetTotalEvents(10,2144);
   den_clone109->SetPassedEvents(10,2052);
   den_clone109->SetTotalEvents(11,2307);
   den_clone109->SetPassedEvents(11,2206);
   den_clone109->SetTotalEvents(12,2235);
   den_clone109->SetPassedEvents(12,2131);
   den_clone109->SetTotalEvents(13,2241);
   den_clone109->SetPassedEvents(13,2125);
   den_clone109->SetTotalEvents(14,2069);
   den_clone109->SetPassedEvents(14,1614);
   den_clone109->SetTotalEvents(15,1901);
   den_clone109->SetPassedEvents(15,1447);
   den_clone109->SetTotalEvents(16,2116);
   den_clone109->SetPassedEvents(16,1976);
   den_clone109->SetTotalEvents(17,2218);
   den_clone109->SetPassedEvents(17,2104);
   den_clone109->SetTotalEvents(18,2288);
   den_clone109->SetPassedEvents(18,2170);
   den_clone109->SetTotalEvents(19,2198);
   den_clone109->SetPassedEvents(19,2072);
   den_clone109->SetTotalEvents(20,2322);
   den_clone109->SetPassedEvents(20,2186);
   den_clone109->SetTotalEvents(21,2256);
   den_clone109->SetPassedEvents(21,2116);
   den_clone109->SetTotalEvents(22,2163);
   den_clone109->SetPassedEvents(22,1992);
   den_clone109->SetTotalEvents(23,2314);
   den_clone109->SetPassedEvents(23,2133);
   den_clone109->SetTotalEvents(24,2192);
   den_clone109->SetPassedEvents(24,2017);
   den_clone109->SetTotalEvents(25,2217);
   den_clone109->SetPassedEvents(25,2015);
   den_clone109->SetTotalEvents(26,0);
   den_clone109->SetPassedEvents(26,0);
   den_clone109->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone109->SetLineColor(ci);
   den_clone109->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone109->SetMarkerColor(ci);
   den_clone109->SetMarkerStyle(22);
   den_clone109->Draw("same samep");
   
   TEfficiency * den_clone110 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone110->SetConfidenceLevel(0.6826895);
   den_clone110->SetBetaAlpha(1);
   den_clone110->SetBetaBeta(1);
   den_clone110->SetWeight(1);
   den_clone110->SetStatisticOption(0);
   den_clone110->SetPosteriorMode(0);
   den_clone110->SetShortestInterval(0);
   den_clone110->SetTotalEvents(0,0);
   den_clone110->SetPassedEvents(0,0);
   den_clone110->SetTotalEvents(1,815);
   den_clone110->SetPassedEvents(1,598);
   den_clone110->SetTotalEvents(2,1938);
   den_clone110->SetPassedEvents(2,1683);
   den_clone110->SetTotalEvents(3,2262);
   den_clone110->SetPassedEvents(3,2087);
   den_clone110->SetTotalEvents(4,2057);
   den_clone110->SetPassedEvents(4,1878);
   den_clone110->SetTotalEvents(5,2257);
   den_clone110->SetPassedEvents(5,2067);
   den_clone110->SetTotalEvents(6,2038);
   den_clone110->SetPassedEvents(6,1783);
   den_clone110->SetTotalEvents(7,2180);
   den_clone110->SetPassedEvents(7,1602);
   den_clone110->SetTotalEvents(8,2318);
   den_clone110->SetPassedEvents(8,1866);
   den_clone110->SetTotalEvents(9,2116);
   den_clone110->SetPassedEvents(9,1936);
   den_clone110->SetTotalEvents(10,2256);
   den_clone110->SetPassedEvents(10,2041);
   den_clone110->SetTotalEvents(11,2269);
   den_clone110->SetPassedEvents(11,2092);
   den_clone110->SetTotalEvents(12,2195);
   den_clone110->SetPassedEvents(12,1998);
   den_clone110->SetTotalEvents(13,2180);
   den_clone110->SetPassedEvents(13,1974);
   den_clone110->SetTotalEvents(14,2109);
   den_clone110->SetPassedEvents(14,1577);
   den_clone110->SetTotalEvents(15,2089);
   den_clone110->SetPassedEvents(15,1532);
   den_clone110->SetTotalEvents(16,2216);
   den_clone110->SetPassedEvents(16,1944);
   den_clone110->SetTotalEvents(17,2214);
   den_clone110->SetPassedEvents(17,2004);
   den_clone110->SetTotalEvents(18,2194);
   den_clone110->SetPassedEvents(18,1981);
   den_clone110->SetTotalEvents(19,2250);
   den_clone110->SetPassedEvents(19,2031);
   den_clone110->SetTotalEvents(20,2188);
   den_clone110->SetPassedEvents(20,1977);
   den_clone110->SetTotalEvents(21,2154);
   den_clone110->SetPassedEvents(21,1907);
   den_clone110->SetTotalEvents(22,2232);
   den_clone110->SetPassedEvents(22,1978);
   den_clone110->SetTotalEvents(23,2234);
   den_clone110->SetPassedEvents(23,1959);
   den_clone110->SetTotalEvents(24,2084);
   den_clone110->SetPassedEvents(24,1835);
   den_clone110->SetTotalEvents(25,2196);
   den_clone110->SetPassedEvents(25,1892);
   den_clone110->SetTotalEvents(26,0);
   den_clone110->SetPassedEvents(26,0);
   den_clone110->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone110->SetLineColor(ci);
   den_clone110->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone110->SetMarkerColor(ci);
   den_clone110->SetMarkerStyle(21);
   den_clone110->Draw("same samep");
   
   TEfficiency * den_clone111 = new TEfficiency("den_clone","",25,1.6,2.4);
   
   den_clone111->SetConfidenceLevel(0.6826895);
   den_clone111->SetBetaAlpha(1);
   den_clone111->SetBetaBeta(1);
   den_clone111->SetWeight(1);
   den_clone111->SetStatisticOption(0);
   den_clone111->SetPosteriorMode(0);
   den_clone111->SetShortestInterval(0);
   den_clone111->SetTotalEvents(0,0);
   den_clone111->SetPassedEvents(0,0);
   den_clone111->SetTotalEvents(1,815);
   den_clone111->SetPassedEvents(1,622);
   den_clone111->SetTotalEvents(2,1938);
   den_clone111->SetPassedEvents(2,1762);
   den_clone111->SetTotalEvents(3,2262);
   den_clone111->SetPassedEvents(3,2192);
   den_clone111->SetTotalEvents(4,2057);
   den_clone111->SetPassedEvents(4,1973);
   den_clone111->SetTotalEvents(5,2257);
   den_clone111->SetPassedEvents(5,2172);
   den_clone111->SetTotalEvents(6,2038);
   den_clone111->SetPassedEvents(6,1867);
   den_clone111->SetTotalEvents(7,2180);
   den_clone111->SetPassedEvents(7,1690);
   den_clone111->SetTotalEvents(8,2318);
   den_clone111->SetPassedEvents(8,1964);
   den_clone111->SetTotalEvents(9,2116);
   den_clone111->SetPassedEvents(9,2028);
   den_clone111->SetTotalEvents(10,2256);
   den_clone111->SetPassedEvents(10,2169);
   den_clone111->SetTotalEvents(11,2269);
   den_clone111->SetPassedEvents(11,2193);
   den_clone111->SetTotalEvents(12,2195);
   den_clone111->SetPassedEvents(12,2103);
   den_clone111->SetTotalEvents(13,2180);
   den_clone111->SetPassedEvents(13,2087);
   den_clone111->SetTotalEvents(14,2109);
   den_clone111->SetPassedEvents(14,1668);
   den_clone111->SetTotalEvents(15,2089);
   den_clone111->SetPassedEvents(15,1611);
   den_clone111->SetTotalEvents(16,2216);
   den_clone111->SetPassedEvents(16,2056);
   den_clone111->SetTotalEvents(17,2214);
   den_clone111->SetPassedEvents(17,2101);
   den_clone111->SetTotalEvents(18,2194);
   den_clone111->SetPassedEvents(18,2072);
   den_clone111->SetTotalEvents(19,2250);
   den_clone111->SetPassedEvents(19,2132);
   den_clone111->SetTotalEvents(20,2188);
   den_clone111->SetPassedEvents(20,2059);
   den_clone111->SetTotalEvents(21,2154);
   den_clone111->SetPassedEvents(21,2010);
   den_clone111->SetTotalEvents(22,2232);
   den_clone111->SetPassedEvents(22,2079);
   den_clone111->SetTotalEvents(23,2234);
   den_clone111->SetPassedEvents(23,2061);
   den_clone111->SetTotalEvents(24,2084);
   den_clone111->SetPassedEvents(24,1933);
   den_clone111->SetTotalEvents(25,2196);
   den_clone111->SetPassedEvents(25,1986);
   den_clone111->SetTotalEvents(26,0);
   den_clone111->SetPassedEvents(26,0);
   den_clone111->SetFillColor(19);
   den_clone111->SetLineWidth(2);
   den_clone111->SetMarkerStyle(23);
   den_clone111->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU0      CSC Run-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("den_clone","PU200 CSC Run-2","pl");
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
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME2/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"CLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
