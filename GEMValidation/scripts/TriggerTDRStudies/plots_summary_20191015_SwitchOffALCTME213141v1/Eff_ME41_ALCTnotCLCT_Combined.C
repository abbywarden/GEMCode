void Eff_ME41_ALCTnotCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 13:10:00 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.714286,0.42125,2.428571,1.0775);
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
   
   TH1F *base__136 = new TH1F("base__136","",25,1.8,2.4);
   base__136->SetMinimum(0.5);
   base__136->SetMaximum(1.025);
   base__136->SetLineStyle(0);
   base__136->SetMarkerStyle(20);
   base__136->GetXaxis()->SetTitle("True muon |#eta|");
   base__136->GetXaxis()->SetLabelFont(42);
   base__136->GetXaxis()->SetLabelOffset(0.007);
   base__136->GetXaxis()->SetLabelSize(0.05);
   base__136->GetXaxis()->SetTitleSize(0.06);
   base__136->GetXaxis()->SetTitleOffset(0.9);
   base__136->GetXaxis()->SetTitleFont(42);
   base__136->GetYaxis()->SetTitle("Efficiency");
   base__136->GetYaxis()->SetLabelFont(42);
   base__136->GetYaxis()->SetLabelOffset(0.007);
   base__136->GetYaxis()->SetLabelSize(0.05);
   base__136->GetYaxis()->SetTitleSize(0.06);
   base__136->GetYaxis()->SetTitleOffset(0.9);
   base__136->GetYaxis()->SetTitleFont(42);
   base__136->GetZaxis()->SetLabelFont(42);
   base__136->GetZaxis()->SetLabelOffset(0.007);
   base__136->GetZaxis()->SetLabelSize(0.05);
   base__136->GetZaxis()->SetTitleSize(0.06);
   base__136->GetZaxis()->SetTitleFont(42);
   base__136->Draw("");
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
   
   TEfficiency * den_clone386 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone386->SetConfidenceLevel(0.6826895);
   den_clone386->SetBetaAlpha(1);
   den_clone386->SetBetaBeta(1);
   den_clone386->SetWeight(1);
   den_clone386->SetStatisticOption(0);
   den_clone386->SetPosteriorMode(0);
   den_clone386->SetShortestInterval(0);
   den_clone386->SetTotalEvents(0,0);
   den_clone386->SetPassedEvents(0,0);
   den_clone386->SetTotalEvents(1,384);
   den_clone386->SetPassedEvents(1,36);
   den_clone386->SetTotalEvents(2,1206);
   den_clone386->SetPassedEvents(2,99);
   den_clone386->SetTotalEvents(3,1660);
   den_clone386->SetPassedEvents(3,90);
   den_clone386->SetTotalEvents(4,1637);
   den_clone386->SetPassedEvents(4,80);
   den_clone386->SetTotalEvents(5,1600);
   den_clone386->SetPassedEvents(5,71);
   den_clone386->SetTotalEvents(6,1744);
   den_clone386->SetPassedEvents(6,82);
   den_clone386->SetTotalEvents(7,1690);
   den_clone386->SetPassedEvents(7,105);
   den_clone386->SetTotalEvents(8,1651);
   den_clone386->SetPassedEvents(8,173);
   den_clone386->SetTotalEvents(9,1621);
   den_clone386->SetPassedEvents(9,100);
   den_clone386->SetTotalEvents(10,1622);
   den_clone386->SetPassedEvents(10,69);
   den_clone386->SetTotalEvents(11,1604);
   den_clone386->SetPassedEvents(11,66);
   den_clone386->SetTotalEvents(12,1562);
   den_clone386->SetPassedEvents(12,64);
   den_clone386->SetTotalEvents(13,1540);
   den_clone386->SetPassedEvents(13,54);
   den_clone386->SetTotalEvents(14,1674);
   den_clone386->SetPassedEvents(14,73);
   den_clone386->SetTotalEvents(15,1562);
   den_clone386->SetPassedEvents(15,121);
   den_clone386->SetTotalEvents(16,1466);
   den_clone386->SetPassedEvents(16,147);
   den_clone386->SetTotalEvents(17,1545);
   den_clone386->SetPassedEvents(17,84);
   den_clone386->SetTotalEvents(18,1726);
   den_clone386->SetPassedEvents(18,77);
   den_clone386->SetTotalEvents(19,1733);
   den_clone386->SetPassedEvents(19,85);
   den_clone386->SetTotalEvents(20,1676);
   den_clone386->SetPassedEvents(20,94);
   den_clone386->SetTotalEvents(21,1605);
   den_clone386->SetPassedEvents(21,79);
   den_clone386->SetTotalEvents(22,1742);
   den_clone386->SetPassedEvents(22,96);
   den_clone386->SetTotalEvents(23,1686);
   den_clone386->SetPassedEvents(23,85);
   den_clone386->SetTotalEvents(24,1623);
   den_clone386->SetPassedEvents(24,105);
   den_clone386->SetTotalEvents(25,1231);
   den_clone386->SetPassedEvents(25,129);
   den_clone386->SetTotalEvents(26,0);
   den_clone386->SetPassedEvents(26,0);
   den_clone386->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone386->SetLineColor(ci);
   den_clone386->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone386->SetMarkerColor(ci);
   den_clone386->SetMarkerStyle(22);
   den_clone386->Draw("same samep");
   
   TEfficiency * den_clone387 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone387->SetConfidenceLevel(0.6826895);
   den_clone387->SetBetaAlpha(1);
   den_clone387->SetBetaBeta(1);
   den_clone387->SetWeight(1);
   den_clone387->SetStatisticOption(0);
   den_clone387->SetPosteriorMode(0);
   den_clone387->SetShortestInterval(0);
   den_clone387->SetTotalEvents(0,0);
   den_clone387->SetPassedEvents(0,0);
   den_clone387->SetTotalEvents(1,419);
   den_clone387->SetPassedEvents(1,63);
   den_clone387->SetTotalEvents(2,1266);
   den_clone387->SetPassedEvents(2,124);
   den_clone387->SetTotalEvents(3,1615);
   den_clone387->SetPassedEvents(3,112);
   den_clone387->SetTotalEvents(4,1644);
   den_clone387->SetPassedEvents(4,95);
   den_clone387->SetTotalEvents(5,1669);
   den_clone387->SetPassedEvents(5,102);
   den_clone387->SetTotalEvents(6,1730);
   den_clone387->SetPassedEvents(6,98);
   den_clone387->SetTotalEvents(7,1670);
   den_clone387->SetPassedEvents(7,117);
   den_clone387->SetTotalEvents(8,1608);
   den_clone387->SetPassedEvents(8,176);
   den_clone387->SetTotalEvents(9,1563);
   den_clone387->SetPassedEvents(9,128);
   den_clone387->SetTotalEvents(10,1655);
   den_clone387->SetPassedEvents(10,102);
   den_clone387->SetTotalEvents(11,1672);
   den_clone387->SetPassedEvents(11,112);
   den_clone387->SetTotalEvents(12,1684);
   den_clone387->SetPassedEvents(12,102);
   den_clone387->SetTotalEvents(13,1670);
   den_clone387->SetPassedEvents(13,94);
   den_clone387->SetTotalEvents(14,1681);
   den_clone387->SetPassedEvents(14,110);
   den_clone387->SetTotalEvents(15,1440);
   den_clone387->SetPassedEvents(15,154);
   den_clone387->SetTotalEvents(16,1495);
   den_clone387->SetPassedEvents(16,170);
   den_clone387->SetTotalEvents(17,1640);
   den_clone387->SetPassedEvents(17,146);
   den_clone387->SetTotalEvents(18,1602);
   den_clone387->SetPassedEvents(18,97);
   den_clone387->SetTotalEvents(19,1626);
   den_clone387->SetPassedEvents(19,101);
   den_clone387->SetTotalEvents(20,1674);
   den_clone387->SetPassedEvents(20,122);
   den_clone387->SetTotalEvents(21,1670);
   den_clone387->SetPassedEvents(21,115);
   den_clone387->SetTotalEvents(22,1674);
   den_clone387->SetPassedEvents(22,114);
   den_clone387->SetTotalEvents(23,1598);
   den_clone387->SetPassedEvents(23,123);
   den_clone387->SetTotalEvents(24,1580);
   den_clone387->SetPassedEvents(24,159);
   den_clone387->SetTotalEvents(25,1205);
   den_clone387->SetPassedEvents(25,162);
   den_clone387->SetTotalEvents(26,0);
   den_clone387->SetPassedEvents(26,0);
   den_clone387->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone387->SetLineColor(ci);
   den_clone387->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone387->SetMarkerColor(ci);
   den_clone387->SetMarkerStyle(21);
   den_clone387->Draw("same samep");
   
   TEfficiency * den_clone388 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone388->SetConfidenceLevel(0.6826895);
   den_clone388->SetBetaAlpha(1);
   den_clone388->SetBetaBeta(1);
   den_clone388->SetWeight(1);
   den_clone388->SetStatisticOption(0);
   den_clone388->SetPosteriorMode(0);
   den_clone388->SetShortestInterval(0);
   den_clone388->SetTotalEvents(0,0);
   den_clone388->SetPassedEvents(0,0);
   den_clone388->SetTotalEvents(1,419);
   den_clone388->SetPassedEvents(1,56);
   den_clone388->SetTotalEvents(2,1266);
   den_clone388->SetPassedEvents(2,100);
   den_clone388->SetTotalEvents(3,1615);
   den_clone388->SetPassedEvents(3,76);
   den_clone388->SetTotalEvents(4,1644);
   den_clone388->SetPassedEvents(4,52);
   den_clone388->SetTotalEvents(5,1669);
   den_clone388->SetPassedEvents(5,62);
   den_clone388->SetTotalEvents(6,1730);
   den_clone388->SetPassedEvents(6,63);
   den_clone388->SetTotalEvents(7,1670);
   den_clone388->SetPassedEvents(7,81);
   den_clone388->SetTotalEvents(8,1608);
   den_clone388->SetPassedEvents(8,135);
   den_clone388->SetTotalEvents(9,1563);
   den_clone388->SetPassedEvents(9,96);
   den_clone388->SetTotalEvents(10,1655);
   den_clone388->SetPassedEvents(10,55);
   den_clone388->SetTotalEvents(11,1672);
   den_clone388->SetPassedEvents(11,58);
   den_clone388->SetTotalEvents(12,1684);
   den_clone388->SetPassedEvents(12,52);
   den_clone388->SetTotalEvents(13,1670);
   den_clone388->SetPassedEvents(13,53);
   den_clone388->SetTotalEvents(14,1681);
   den_clone388->SetPassedEvents(14,67);
   den_clone388->SetTotalEvents(15,1440);
   den_clone388->SetPassedEvents(15,118);
   den_clone388->SetTotalEvents(16,1495);
   den_clone388->SetPassedEvents(16,135);
   den_clone388->SetTotalEvents(17,1640);
   den_clone388->SetPassedEvents(17,107);
   den_clone388->SetTotalEvents(18,1602);
   den_clone388->SetPassedEvents(18,64);
   den_clone388->SetTotalEvents(19,1626);
   den_clone388->SetPassedEvents(19,68);
   den_clone388->SetTotalEvents(20,1674);
   den_clone388->SetPassedEvents(20,76);
   den_clone388->SetTotalEvents(21,1670);
   den_clone388->SetPassedEvents(21,68);
   den_clone388->SetTotalEvents(22,1674);
   den_clone388->SetPassedEvents(22,76);
   den_clone388->SetTotalEvents(23,1598);
   den_clone388->SetPassedEvents(23,80);
   den_clone388->SetTotalEvents(24,1580);
   den_clone388->SetPassedEvents(24,120);
   den_clone388->SetTotalEvents(25,1205);
   den_clone388->SetPassedEvents(25,138);
   den_clone388->SetTotalEvents(26,0);
   den_clone388->SetPassedEvents(26,0);
   den_clone388->SetFillColor(19);
   den_clone388->SetLineWidth(2);
   den_clone388->SetMarkerStyle(23);
   den_clone388->Draw("same samep");
   
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
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME4/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"ALCTnotCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
