void Eff_ME42_ALCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 13:10:16 2019) by ROOT version 6.14/09
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
   
   TH1F *base__146 = new TH1F("base__146","",25,1.1,1.8);
   base__146->SetMinimum(0.5);
   base__146->SetMaximum(1.025);
   base__146->SetLineStyle(0);
   base__146->SetMarkerStyle(20);
   base__146->GetXaxis()->SetTitle("True muon |#eta|");
   base__146->GetXaxis()->SetLabelFont(42);
   base__146->GetXaxis()->SetLabelOffset(0.007);
   base__146->GetXaxis()->SetLabelSize(0.05);
   base__146->GetXaxis()->SetTitleSize(0.06);
   base__146->GetXaxis()->SetTitleOffset(0.9);
   base__146->GetXaxis()->SetTitleFont(42);
   base__146->GetYaxis()->SetTitle("Efficiency");
   base__146->GetYaxis()->SetLabelFont(42);
   base__146->GetYaxis()->SetLabelOffset(0.007);
   base__146->GetYaxis()->SetLabelSize(0.05);
   base__146->GetYaxis()->SetTitleSize(0.06);
   base__146->GetYaxis()->SetTitleOffset(0.9);
   base__146->GetYaxis()->SetTitleFont(42);
   base__146->GetZaxis()->SetLabelFont(42);
   base__146->GetZaxis()->SetLabelOffset(0.007);
   base__146->GetZaxis()->SetLabelSize(0.05);
   base__146->GetZaxis()->SetTitleSize(0.06);
   base__146->GetZaxis()->SetTitleFont(42);
   base__146->Draw("");
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
   
   TEfficiency * den_clone416 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone416->SetConfidenceLevel(0.6826895);
   den_clone416->SetBetaAlpha(1);
   den_clone416->SetBetaBeta(1);
   den_clone416->SetWeight(1);
   den_clone416->SetStatisticOption(0);
   den_clone416->SetPosteriorMode(0);
   den_clone416->SetShortestInterval(0);
   den_clone416->SetTotalEvents(0,0);
   den_clone416->SetPassedEvents(0,0);
   den_clone416->SetTotalEvents(1,12);
   den_clone416->SetPassedEvents(1,11);
   den_clone416->SetTotalEvents(2,33);
   den_clone416->SetPassedEvents(2,31);
   den_clone416->SetTotalEvents(3,378);
   den_clone416->SetPassedEvents(3,305);
   den_clone416->SetTotalEvents(4,1482);
   den_clone416->SetPassedEvents(4,1426);
   den_clone416->SetTotalEvents(5,1960);
   den_clone416->SetPassedEvents(5,1958);
   den_clone416->SetTotalEvents(6,1946);
   den_clone416->SetPassedEvents(6,1945);
   den_clone416->SetTotalEvents(7,2014);
   den_clone416->SetPassedEvents(7,2013);
   den_clone416->SetTotalEvents(8,1984);
   den_clone416->SetPassedEvents(8,1982);
   den_clone416->SetTotalEvents(9,1927);
   den_clone416->SetPassedEvents(9,1926);
   den_clone416->SetTotalEvents(10,1815);
   den_clone416->SetPassedEvents(10,1813);
   den_clone416->SetTotalEvents(11,2052);
   den_clone416->SetPassedEvents(11,2049);
   den_clone416->SetTotalEvents(12,1874);
   den_clone416->SetPassedEvents(12,1873);
   den_clone416->SetTotalEvents(13,1997);
   den_clone416->SetPassedEvents(13,1996);
   den_clone416->SetTotalEvents(14,1964);
   den_clone416->SetPassedEvents(14,1963);
   den_clone416->SetTotalEvents(15,1853);
   den_clone416->SetPassedEvents(15,1852);
   den_clone416->SetTotalEvents(16,2061);
   den_clone416->SetPassedEvents(16,2060);
   den_clone416->SetTotalEvents(17,1946);
   den_clone416->SetPassedEvents(17,1943);
   den_clone416->SetTotalEvents(18,1899);
   den_clone416->SetPassedEvents(18,1895);
   den_clone416->SetTotalEvents(19,1921);
   den_clone416->SetPassedEvents(19,1918);
   den_clone416->SetTotalEvents(20,1951);
   den_clone416->SetPassedEvents(20,1951);
   den_clone416->SetTotalEvents(21,1903);
   den_clone416->SetPassedEvents(21,1900);
   den_clone416->SetTotalEvents(22,1814);
   den_clone416->SetPassedEvents(22,1813);
   den_clone416->SetTotalEvents(23,1798);
   den_clone416->SetPassedEvents(23,1768);
   den_clone416->SetTotalEvents(24,977);
   den_clone416->SetPassedEvents(24,881);
   den_clone416->SetTotalEvents(25,35);
   den_clone416->SetPassedEvents(25,19);
   den_clone416->SetTotalEvents(26,0);
   den_clone416->SetPassedEvents(26,0);
   den_clone416->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   den_clone416->SetLineColor(ci);
   den_clone416->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone416->SetMarkerColor(ci);
   den_clone416->SetMarkerStyle(23);
   den_clone416->Draw("same samep");
   
   TEfficiency * den_clone417 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone417->SetConfidenceLevel(0.6826895);
   den_clone417->SetBetaAlpha(1);
   den_clone417->SetBetaBeta(1);
   den_clone417->SetWeight(1);
   den_clone417->SetStatisticOption(0);
   den_clone417->SetPosteriorMode(0);
   den_clone417->SetShortestInterval(0);
   den_clone417->SetTotalEvents(0,0);
   den_clone417->SetPassedEvents(0,0);
   den_clone417->SetTotalEvents(1,12);
   den_clone417->SetPassedEvents(1,11);
   den_clone417->SetTotalEvents(2,33);
   den_clone417->SetPassedEvents(2,31);
   den_clone417->SetTotalEvents(3,378);
   den_clone417->SetPassedEvents(3,305);
   den_clone417->SetTotalEvents(4,1482);
   den_clone417->SetPassedEvents(4,1426);
   den_clone417->SetTotalEvents(5,1960);
   den_clone417->SetPassedEvents(5,1958);
   den_clone417->SetTotalEvents(6,1946);
   den_clone417->SetPassedEvents(6,1945);
   den_clone417->SetTotalEvents(7,2014);
   den_clone417->SetPassedEvents(7,2013);
   den_clone417->SetTotalEvents(8,1984);
   den_clone417->SetPassedEvents(8,1982);
   den_clone417->SetTotalEvents(9,1927);
   den_clone417->SetPassedEvents(9,1926);
   den_clone417->SetTotalEvents(10,1815);
   den_clone417->SetPassedEvents(10,1813);
   den_clone417->SetTotalEvents(11,2052);
   den_clone417->SetPassedEvents(11,2049);
   den_clone417->SetTotalEvents(12,1874);
   den_clone417->SetPassedEvents(12,1873);
   den_clone417->SetTotalEvents(13,1997);
   den_clone417->SetPassedEvents(13,1996);
   den_clone417->SetTotalEvents(14,1964);
   den_clone417->SetPassedEvents(14,1963);
   den_clone417->SetTotalEvents(15,1853);
   den_clone417->SetPassedEvents(15,1852);
   den_clone417->SetTotalEvents(16,2061);
   den_clone417->SetPassedEvents(16,2060);
   den_clone417->SetTotalEvents(17,1946);
   den_clone417->SetPassedEvents(17,1943);
   den_clone417->SetTotalEvents(18,1899);
   den_clone417->SetPassedEvents(18,1895);
   den_clone417->SetTotalEvents(19,1921);
   den_clone417->SetPassedEvents(19,1918);
   den_clone417->SetTotalEvents(20,1951);
   den_clone417->SetPassedEvents(20,1951);
   den_clone417->SetTotalEvents(21,1903);
   den_clone417->SetPassedEvents(21,1900);
   den_clone417->SetTotalEvents(22,1814);
   den_clone417->SetPassedEvents(22,1813);
   den_clone417->SetTotalEvents(23,1798);
   den_clone417->SetPassedEvents(23,1768);
   den_clone417->SetTotalEvents(24,977);
   den_clone417->SetPassedEvents(24,881);
   den_clone417->SetTotalEvents(25,35);
   den_clone417->SetPassedEvents(25,19);
   den_clone417->SetTotalEvents(26,0);
   den_clone417->SetPassedEvents(26,0);
   den_clone417->SetFillColor(19);
   den_clone417->SetLineWidth(2);
   den_clone417->SetMarkerStyle(22);
   den_clone417->Draw("same samep");
   
   TEfficiency * den_clone418 = new TEfficiency("den_clone","",25,1.1,1.8);
   
   den_clone418->SetConfidenceLevel(0.6826895);
   den_clone418->SetBetaAlpha(1);
   den_clone418->SetBetaBeta(1);
   den_clone418->SetWeight(1);
   den_clone418->SetStatisticOption(0);
   den_clone418->SetPosteriorMode(0);
   den_clone418->SetShortestInterval(0);
   den_clone418->SetTotalEvents(0,0);
   den_clone418->SetPassedEvents(0,0);
   den_clone418->SetTotalEvents(1,12);
   den_clone418->SetPassedEvents(1,11);
   den_clone418->SetTotalEvents(2,33);
   den_clone418->SetPassedEvents(2,31);
   den_clone418->SetTotalEvents(3,378);
   den_clone418->SetPassedEvents(3,305);
   den_clone418->SetTotalEvents(4,1482);
   den_clone418->SetPassedEvents(4,1426);
   den_clone418->SetTotalEvents(5,1960);
   den_clone418->SetPassedEvents(5,1958);
   den_clone418->SetTotalEvents(6,1946);
   den_clone418->SetPassedEvents(6,1945);
   den_clone418->SetTotalEvents(7,2014);
   den_clone418->SetPassedEvents(7,2013);
   den_clone418->SetTotalEvents(8,1984);
   den_clone418->SetPassedEvents(8,1982);
   den_clone418->SetTotalEvents(9,1927);
   den_clone418->SetPassedEvents(9,1926);
   den_clone418->SetTotalEvents(10,1815);
   den_clone418->SetPassedEvents(10,1813);
   den_clone418->SetTotalEvents(11,2052);
   den_clone418->SetPassedEvents(11,2049);
   den_clone418->SetTotalEvents(12,1874);
   den_clone418->SetPassedEvents(12,1873);
   den_clone418->SetTotalEvents(13,1997);
   den_clone418->SetPassedEvents(13,1996);
   den_clone418->SetTotalEvents(14,1964);
   den_clone418->SetPassedEvents(14,1963);
   den_clone418->SetTotalEvents(15,1853);
   den_clone418->SetPassedEvents(15,1852);
   den_clone418->SetTotalEvents(16,2061);
   den_clone418->SetPassedEvents(16,2060);
   den_clone418->SetTotalEvents(17,1946);
   den_clone418->SetPassedEvents(17,1943);
   den_clone418->SetTotalEvents(18,1899);
   den_clone418->SetPassedEvents(18,1895);
   den_clone418->SetTotalEvents(19,1921);
   den_clone418->SetPassedEvents(19,1918);
   den_clone418->SetTotalEvents(20,1951);
   den_clone418->SetPassedEvents(20,1951);
   den_clone418->SetTotalEvents(21,1903);
   den_clone418->SetPassedEvents(21,1900);
   den_clone418->SetTotalEvents(22,1814);
   den_clone418->SetPassedEvents(22,1813);
   den_clone418->SetTotalEvents(23,1798);
   den_clone418->SetPassedEvents(23,1768);
   den_clone418->SetTotalEvents(24,977);
   den_clone418->SetPassedEvents(24,881);
   den_clone418->SetTotalEvents(25,35);
   den_clone418->SetPassedEvents(25,19);
   den_clone418->SetTotalEvents(26,0);
   den_clone418->SetPassedEvents(26,0);
   den_clone418->SetFillColor(19);

   ci = TColor::GetColor("#009900");
   den_clone418->SetLineColor(ci);
   den_clone418->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   den_clone418->SetMarkerColor(ci);
   den_clone418->SetMarkerStyle(21);
   den_clone418->Draw("same samep");
   
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
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME4/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
