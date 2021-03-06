void Eff_ME42_notALCTnotCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 11 07:51:19 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1,0.42125,1.833333,1.0775);
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
   
   TH1F *base__152 = new TH1F("base__152","",25,1.1,1.8);
   base__152->SetMinimum(0.5);
   base__152->SetMaximum(1.025);
   base__152->SetLineStyle(0);
   base__152->SetMarkerStyle(20);
   base__152->GetXaxis()->SetTitle("True muon |#eta|");
   base__152->GetXaxis()->SetLabelFont(42);
   base__152->GetXaxis()->SetLabelOffset(0.007);
   base__152->GetXaxis()->SetLabelSize(0.05);
   base__152->GetXaxis()->SetTitleSize(0.06);
   base__152->GetXaxis()->SetTitleOffset(0.9);
   base__152->GetXaxis()->SetTitleFont(42);
   base__152->GetYaxis()->SetTitle("Efficiency");
   base__152->GetYaxis()->SetLabelFont(42);
   base__152->GetYaxis()->SetLabelOffset(0.007);
   base__152->GetYaxis()->SetLabelSize(0.05);
   base__152->GetYaxis()->SetTitleSize(0.06);
   base__152->GetYaxis()->SetTitleOffset(0.9);
   base__152->GetYaxis()->SetTitleFont(42);
   base__152->GetZaxis()->SetLabelFont(42);
   base__152->GetZaxis()->SetLabelOffset(0.007);
   base__152->GetZaxis()->SetLabelSize(0.05);
   base__152->GetZaxis()->SetTitleSize(0.06);
   base__152->GetZaxis()->SetTitleFont(42);
   base__152->Draw("");
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
      tex = new TLatex(0.2208,0.936,"Phase-2 Simulation");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.0456);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TEfficiency * den_clone561 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone561->SetConfidenceLevel(0.6826895);
   den_clone561->SetBetaAlpha(1);
   den_clone561->SetBetaBeta(1);
   den_clone561->SetWeight(1);
   den_clone561->SetStatisticOption(0);
   den_clone561->SetPosteriorMode(0);
   den_clone561->SetShortestInterval(0);
   den_clone561->SetTotalEvents(0,0);
   den_clone561->SetPassedEvents(0,0);
   den_clone561->SetTotalEvents(1,15);
   den_clone561->SetPassedEvents(1,0);
   den_clone561->SetTotalEvents(2,49);
   den_clone561->SetPassedEvents(2,2);
   den_clone561->SetTotalEvents(3,365);
   den_clone561->SetPassedEvents(3,67);
   den_clone561->SetTotalEvents(4,1528);
   den_clone561->SetPassedEvents(4,63);
   den_clone561->SetTotalEvents(5,1998);
   den_clone561->SetPassedEvents(5,2);
   den_clone561->SetTotalEvents(6,1867);
   den_clone561->SetPassedEvents(6,0);
   den_clone561->SetTotalEvents(7,1882);
   den_clone561->SetPassedEvents(7,2);
   den_clone561->SetTotalEvents(8,2038);
   den_clone561->SetPassedEvents(8,1);
   den_clone561->SetTotalEvents(9,1957);
   den_clone561->SetPassedEvents(9,1);
   den_clone561->SetTotalEvents(10,1907);
   den_clone561->SetPassedEvents(10,0);
   den_clone561->SetTotalEvents(11,1928);
   den_clone561->SetPassedEvents(11,2);
   den_clone561->SetTotalEvents(12,1994);
   den_clone561->SetPassedEvents(12,6);
   den_clone561->SetTotalEvents(13,1910);
   den_clone561->SetPassedEvents(13,0);
   den_clone561->SetTotalEvents(14,1837);
   den_clone561->SetPassedEvents(14,2);
   den_clone561->SetTotalEvents(15,1967);
   den_clone561->SetPassedEvents(15,0);
   den_clone561->SetTotalEvents(16,1864);
   den_clone561->SetPassedEvents(16,4);
   den_clone561->SetTotalEvents(17,1753);
   den_clone561->SetPassedEvents(17,3);
   den_clone561->SetTotalEvents(18,1982);
   den_clone561->SetPassedEvents(18,3);
   den_clone561->SetTotalEvents(19,1802);
   den_clone561->SetPassedEvents(19,0);
   den_clone561->SetTotalEvents(20,1925);
   den_clone561->SetPassedEvents(20,0);
   den_clone561->SetTotalEvents(21,1900);
   den_clone561->SetPassedEvents(21,0);
   den_clone561->SetTotalEvents(22,1946);
   den_clone561->SetPassedEvents(22,1);
   den_clone561->SetTotalEvents(23,1858);
   den_clone561->SetPassedEvents(23,23);
   den_clone561->SetTotalEvents(24,939);
   den_clone561->SetPassedEvents(24,93);
   den_clone561->SetTotalEvents(25,32);
   den_clone561->SetPassedEvents(25,12);
   den_clone561->SetTotalEvents(26,0);
   den_clone561->SetPassedEvents(26,0);
   den_clone561->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone561->SetLineColor(ci);
   den_clone561->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone561->SetMarkerColor(ci);
   den_clone561->SetMarkerStyle(22);
   den_clone561->Draw("same samep");
   
   TEfficiency * den_clone562 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone562->SetConfidenceLevel(0.6826895);
   den_clone562->SetBetaAlpha(1);
   den_clone562->SetBetaBeta(1);
   den_clone562->SetWeight(1);
   den_clone562->SetStatisticOption(0);
   den_clone562->SetPosteriorMode(0);
   den_clone562->SetShortestInterval(0);
   den_clone562->SetTotalEvents(0,0);
   den_clone562->SetPassedEvents(0,0);
   den_clone562->SetTotalEvents(1,12);
   den_clone562->SetPassedEvents(1,1);
   den_clone562->SetTotalEvents(2,33);
   den_clone562->SetPassedEvents(2,2);
   den_clone562->SetTotalEvents(3,378);
   den_clone562->SetPassedEvents(3,73);
   den_clone562->SetTotalEvents(4,1482);
   den_clone562->SetPassedEvents(4,56);
   den_clone562->SetTotalEvents(5,1960);
   den_clone562->SetPassedEvents(5,2);
   den_clone562->SetTotalEvents(6,1946);
   den_clone562->SetPassedEvents(6,0);
   den_clone562->SetTotalEvents(7,2014);
   den_clone562->SetPassedEvents(7,1);
   den_clone562->SetTotalEvents(8,1984);
   den_clone562->SetPassedEvents(8,2);
   den_clone562->SetTotalEvents(9,1927);
   den_clone562->SetPassedEvents(9,0);
   den_clone562->SetTotalEvents(10,1815);
   den_clone562->SetPassedEvents(10,2);
   den_clone562->SetTotalEvents(11,2052);
   den_clone562->SetPassedEvents(11,3);
   den_clone562->SetTotalEvents(12,1874);
   den_clone562->SetPassedEvents(12,0);
   den_clone562->SetTotalEvents(13,1997);
   den_clone562->SetPassedEvents(13,0);
   den_clone562->SetTotalEvents(14,1964);
   den_clone562->SetPassedEvents(14,1);
   den_clone562->SetTotalEvents(15,1853);
   den_clone562->SetPassedEvents(15,1);
   den_clone562->SetTotalEvents(16,2061);
   den_clone562->SetPassedEvents(16,1);
   den_clone562->SetTotalEvents(17,1946);
   den_clone562->SetPassedEvents(17,3);
   den_clone562->SetTotalEvents(18,1899);
   den_clone562->SetPassedEvents(18,4);
   den_clone562->SetTotalEvents(19,1921);
   den_clone562->SetPassedEvents(19,3);
   den_clone562->SetTotalEvents(20,1951);
   den_clone562->SetPassedEvents(20,0);
   den_clone562->SetTotalEvents(21,1903);
   den_clone562->SetPassedEvents(21,3);
   den_clone562->SetTotalEvents(22,1814);
   den_clone562->SetPassedEvents(22,0);
   den_clone562->SetTotalEvents(23,1798);
   den_clone562->SetPassedEvents(23,30);
   den_clone562->SetTotalEvents(24,977);
   den_clone562->SetPassedEvents(24,96);
   den_clone562->SetTotalEvents(25,35);
   den_clone562->SetPassedEvents(25,16);
   den_clone562->SetTotalEvents(26,0);
   den_clone562->SetPassedEvents(26,0);
   den_clone562->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone562->SetLineColor(ci);
   den_clone562->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone562->SetMarkerColor(ci);
   den_clone562->SetMarkerStyle(21);
   den_clone562->Draw("same samep");
   
   TEfficiency * den_clone563 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone563->SetConfidenceLevel(0.6826895);
   den_clone563->SetBetaAlpha(1);
   den_clone563->SetBetaBeta(1);
   den_clone563->SetWeight(1);
   den_clone563->SetStatisticOption(0);
   den_clone563->SetPosteriorMode(0);
   den_clone563->SetShortestInterval(0);
   den_clone563->SetTotalEvents(0,0);
   den_clone563->SetPassedEvents(0,0);
   den_clone563->SetTotalEvents(1,12);
   den_clone563->SetPassedEvents(1,1);
   den_clone563->SetTotalEvents(2,33);
   den_clone563->SetPassedEvents(2,2);
   den_clone563->SetTotalEvents(3,378);
   den_clone563->SetPassedEvents(3,73);
   den_clone563->SetTotalEvents(4,1482);
   den_clone563->SetPassedEvents(4,56);
   den_clone563->SetTotalEvents(5,1960);
   den_clone563->SetPassedEvents(5,2);
   den_clone563->SetTotalEvents(6,1946);
   den_clone563->SetPassedEvents(6,0);
   den_clone563->SetTotalEvents(7,2014);
   den_clone563->SetPassedEvents(7,1);
   den_clone563->SetTotalEvents(8,1984);
   den_clone563->SetPassedEvents(8,2);
   den_clone563->SetTotalEvents(9,1927);
   den_clone563->SetPassedEvents(9,0);
   den_clone563->SetTotalEvents(10,1815);
   den_clone563->SetPassedEvents(10,2);
   den_clone563->SetTotalEvents(11,2052);
   den_clone563->SetPassedEvents(11,3);
   den_clone563->SetTotalEvents(12,1874);
   den_clone563->SetPassedEvents(12,0);
   den_clone563->SetTotalEvents(13,1997);
   den_clone563->SetPassedEvents(13,0);
   den_clone563->SetTotalEvents(14,1964);
   den_clone563->SetPassedEvents(14,1);
   den_clone563->SetTotalEvents(15,1853);
   den_clone563->SetPassedEvents(15,1);
   den_clone563->SetTotalEvents(16,2061);
   den_clone563->SetPassedEvents(16,1);
   den_clone563->SetTotalEvents(17,1946);
   den_clone563->SetPassedEvents(17,3);
   den_clone563->SetTotalEvents(18,1899);
   den_clone563->SetPassedEvents(18,4);
   den_clone563->SetTotalEvents(19,1921);
   den_clone563->SetPassedEvents(19,3);
   den_clone563->SetTotalEvents(20,1951);
   den_clone563->SetPassedEvents(20,0);
   den_clone563->SetTotalEvents(21,1903);
   den_clone563->SetPassedEvents(21,3);
   den_clone563->SetTotalEvents(22,1814);
   den_clone563->SetPassedEvents(22,0);
   den_clone563->SetTotalEvents(23,1798);
   den_clone563->SetPassedEvents(23,30);
   den_clone563->SetTotalEvents(24,977);
   den_clone563->SetPassedEvents(24,96);
   den_clone563->SetTotalEvents(25,35);
   den_clone563->SetPassedEvents(25,16);
   den_clone563->SetTotalEvents(26,0);
   den_clone563->SetPassedEvents(26,0);
   den_clone563->SetFillColor(19);
   den_clone563->SetLineWidth(2);
   den_clone563->SetMarkerStyle(23);
   den_clone563->Draw("same samep");
   
   TEfficiency * den_clone564 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone564->SetConfidenceLevel(0.6826895);
   den_clone564->SetBetaAlpha(1);
   den_clone564->SetBetaBeta(1);
   den_clone564->SetWeight(1);
   den_clone564->SetStatisticOption(0);
   den_clone564->SetPosteriorMode(0);
   den_clone564->SetShortestInterval(0);
   den_clone564->SetTotalEvents(0,0);
   den_clone564->SetPassedEvents(0,0);
   den_clone564->SetTotalEvents(1,6);
   den_clone564->SetPassedEvents(1,0);
   den_clone564->SetTotalEvents(2,15);
   den_clone564->SetPassedEvents(2,0);
   den_clone564->SetTotalEvents(3,109);
   den_clone564->SetPassedEvents(3,0);
   den_clone564->SetTotalEvents(4,463);
   den_clone564->SetPassedEvents(4,2);
   den_clone564->SetTotalEvents(5,686);
   den_clone564->SetPassedEvents(5,1);
   den_clone564->SetTotalEvents(6,715);
   den_clone564->SetPassedEvents(6,1);
   den_clone564->SetTotalEvents(7,735);
   den_clone564->SetPassedEvents(7,0);
   den_clone564->SetTotalEvents(8,700);
   den_clone564->SetPassedEvents(8,3);
   den_clone564->SetTotalEvents(9,621);
   den_clone564->SetPassedEvents(9,0);
   den_clone564->SetTotalEvents(10,650);
   den_clone564->SetPassedEvents(10,0);
   den_clone564->SetTotalEvents(11,679);
   den_clone564->SetPassedEvents(11,0);
   den_clone564->SetTotalEvents(12,748);
   den_clone564->SetPassedEvents(12,0);
   den_clone564->SetTotalEvents(13,695);
   den_clone564->SetPassedEvents(13,0);
   den_clone564->SetTotalEvents(14,649);
   den_clone564->SetPassedEvents(14,1);
   den_clone564->SetTotalEvents(15,656);
   den_clone564->SetPassedEvents(15,0);
   den_clone564->SetTotalEvents(16,670);
   den_clone564->SetPassedEvents(16,1);
   den_clone564->SetTotalEvents(17,738);
   den_clone564->SetPassedEvents(17,0);
   den_clone564->SetTotalEvents(18,695);
   den_clone564->SetPassedEvents(18,1);
   den_clone564->SetTotalEvents(19,669);
   den_clone564->SetPassedEvents(19,2);
   den_clone564->SetTotalEvents(20,690);
   den_clone564->SetPassedEvents(20,1);
   den_clone564->SetTotalEvents(21,682);
   den_clone564->SetPassedEvents(21,3);
   den_clone564->SetTotalEvents(22,708);
   den_clone564->SetPassedEvents(22,1);
   den_clone564->SetTotalEvents(23,694);
   den_clone564->SetPassedEvents(23,1);
   den_clone564->SetTotalEvents(24,315);
   den_clone564->SetPassedEvents(24,1);
   den_clone564->SetTotalEvents(25,6);
   den_clone564->SetPassedEvents(25,0);
   den_clone564->SetTotalEvents(26,0);
   den_clone564->SetPassedEvents(26,0);
   den_clone564->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone564->SetLineColor(ci);
   den_clone564->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone564->SetMarkerColor(ci);
   den_clone564->SetMarkerStyle(23);
   den_clone564->Draw("same samep");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("den_clone","PU0 CSC Run-2","pl");
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
   entry=leg->AddEntry("den_clone","PU300 CSC Phase-2","pl");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME4/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notALCTnotCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
