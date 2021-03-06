void Eff_ME1b_notALCTnotCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Oct 17 14:01:24 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.514286,0.42125,2.228571,1.0775);
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
   
   TH1F *base__40 = new TH1F("base__40","",25,1.6,2.2);
   base__40->SetMinimum(0.5);
   base__40->SetMaximum(1.025);
   base__40->SetLineStyle(0);
   base__40->SetMarkerStyle(20);
   base__40->GetXaxis()->SetTitle("True muon |#eta|");
   base__40->GetXaxis()->SetLabelFont(42);
   base__40->GetXaxis()->SetLabelOffset(0.007);
   base__40->GetXaxis()->SetLabelSize(0.05);
   base__40->GetXaxis()->SetTitleSize(0.06);
   base__40->GetXaxis()->SetTitleOffset(0.9);
   base__40->GetXaxis()->SetTitleFont(42);
   base__40->GetYaxis()->SetTitle("Efficiency");
   base__40->GetYaxis()->SetLabelFont(42);
   base__40->GetYaxis()->SetLabelOffset(0.007);
   base__40->GetYaxis()->SetLabelSize(0.05);
   base__40->GetYaxis()->SetTitleSize(0.06);
   base__40->GetYaxis()->SetTitleOffset(0.9);
   base__40->GetYaxis()->SetTitleFont(42);
   base__40->GetZaxis()->SetLabelFont(42);
   base__40->GetZaxis()->SetLabelOffset(0.007);
   base__40->GetZaxis()->SetLabelSize(0.05);
   base__40->GetZaxis()->SetTitleSize(0.06);
   base__40->GetZaxis()->SetTitleFont(42);
   base__40->Draw("");
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
   
   TEfficiency * den_clone112 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone112->SetConfidenceLevel(0.6826895);
   den_clone112->SetBetaAlpha(1);
   den_clone112->SetBetaBeta(1);
   den_clone112->SetWeight(1);
   den_clone112->SetStatisticOption(0);
   den_clone112->SetPosteriorMode(0);
   den_clone112->SetShortestInterval(0);
   den_clone112->SetTotalEvents(0,0);
   den_clone112->SetPassedEvents(0,0);
   den_clone112->SetTotalEvents(1,1195);
   den_clone112->SetPassedEvents(1,94);
   den_clone112->SetTotalEvents(2,1620);
   den_clone112->SetPassedEvents(2,7);
   den_clone112->SetTotalEvents(3,1722);
   den_clone112->SetPassedEvents(3,3);
   den_clone112->SetTotalEvents(4,1586);
   den_clone112->SetPassedEvents(4,3);
   den_clone112->SetTotalEvents(5,1784);
   den_clone112->SetPassedEvents(5,1);
   den_clone112->SetTotalEvents(6,1620);
   den_clone112->SetPassedEvents(6,1);
   den_clone112->SetTotalEvents(7,1550);
   den_clone112->SetPassedEvents(7,0);
   den_clone112->SetTotalEvents(8,1729);
   den_clone112->SetPassedEvents(8,3);
   den_clone112->SetTotalEvents(9,1677);
   den_clone112->SetPassedEvents(9,2);
   den_clone112->SetTotalEvents(10,1696);
   den_clone112->SetPassedEvents(10,1);
   den_clone112->SetTotalEvents(11,1651);
   den_clone112->SetPassedEvents(11,0);
   den_clone112->SetTotalEvents(12,1631);
   den_clone112->SetPassedEvents(12,3);
   den_clone112->SetTotalEvents(13,1623);
   den_clone112->SetPassedEvents(13,2);
   den_clone112->SetTotalEvents(14,1704);
   den_clone112->SetPassedEvents(14,1);
   den_clone112->SetTotalEvents(15,1653);
   den_clone112->SetPassedEvents(15,3);
   den_clone112->SetTotalEvents(16,1702);
   den_clone112->SetPassedEvents(16,2);
   den_clone112->SetTotalEvents(17,1659);
   den_clone112->SetPassedEvents(17,2);
   den_clone112->SetTotalEvents(18,1646);
   den_clone112->SetPassedEvents(18,2);
   den_clone112->SetTotalEvents(19,1626);
   den_clone112->SetPassedEvents(19,4);
   den_clone112->SetTotalEvents(20,1448);
   den_clone112->SetPassedEvents(20,123);
   den_clone112->SetTotalEvents(21,1021);
   den_clone112->SetPassedEvents(21,64);
   den_clone112->SetTotalEvents(22,636);
   den_clone112->SetPassedEvents(22,107);
   den_clone112->SetTotalEvents(23,115);
   den_clone112->SetPassedEvents(23,49);
   den_clone112->SetTotalEvents(24,0);
   den_clone112->SetPassedEvents(24,0);
   den_clone112->SetTotalEvents(25,0);
   den_clone112->SetPassedEvents(25,0);
   den_clone112->SetTotalEvents(26,0);
   den_clone112->SetPassedEvents(26,0);
   den_clone112->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone112->SetLineColor(ci);
   den_clone112->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone112->SetMarkerColor(ci);
   den_clone112->SetMarkerStyle(22);
   den_clone112->Draw("same samep");
   
   TEfficiency * den_clone113 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone113->SetConfidenceLevel(0.6826895);
   den_clone113->SetBetaAlpha(1);
   den_clone113->SetBetaBeta(1);
   den_clone113->SetWeight(1);
   den_clone113->SetStatisticOption(0);
   den_clone113->SetPosteriorMode(0);
   den_clone113->SetShortestInterval(0);
   den_clone113->SetTotalEvents(0,0);
   den_clone113->SetPassedEvents(0,0);
   den_clone113->SetTotalEvents(1,1249);
   den_clone113->SetPassedEvents(1,75);
   den_clone113->SetTotalEvents(2,1718);
   den_clone113->SetPassedEvents(2,8);
   den_clone113->SetTotalEvents(3,1621);
   den_clone113->SetPassedEvents(3,1);
   den_clone113->SetTotalEvents(4,1755);
   den_clone113->SetPassedEvents(4,10);
   den_clone113->SetTotalEvents(5,1544);
   den_clone113->SetPassedEvents(5,11);
   den_clone113->SetTotalEvents(6,1633);
   den_clone113->SetPassedEvents(6,13);
   den_clone113->SetTotalEvents(7,1644);
   den_clone113->SetPassedEvents(7,12);
   den_clone113->SetTotalEvents(8,1525);
   den_clone113->SetPassedEvents(8,11);
   den_clone113->SetTotalEvents(9,1623);
   den_clone113->SetPassedEvents(9,9);
   den_clone113->SetTotalEvents(10,1746);
   den_clone113->SetPassedEvents(10,14);
   den_clone113->SetTotalEvents(11,1660);
   den_clone113->SetPassedEvents(11,13);
   den_clone113->SetTotalEvents(12,1577);
   den_clone113->SetPassedEvents(12,15);
   den_clone113->SetTotalEvents(13,1711);
   den_clone113->SetPassedEvents(13,10);
   den_clone113->SetTotalEvents(14,1686);
   den_clone113->SetPassedEvents(14,17);
   den_clone113->SetTotalEvents(15,1657);
   den_clone113->SetPassedEvents(15,10);
   den_clone113->SetTotalEvents(16,1666);
   den_clone113->SetPassedEvents(16,18);
   den_clone113->SetTotalEvents(17,1669);
   den_clone113->SetPassedEvents(17,17);
   den_clone113->SetTotalEvents(18,1627);
   den_clone113->SetPassedEvents(18,28);
   den_clone113->SetTotalEvents(19,1614);
   den_clone113->SetPassedEvents(19,24);
   den_clone113->SetTotalEvents(20,1635);
   den_clone113->SetPassedEvents(20,138);
   den_clone113->SetTotalEvents(21,998);
   den_clone113->SetPassedEvents(21,78);
   den_clone113->SetTotalEvents(22,763);
   den_clone113->SetPassedEvents(22,133);
   den_clone113->SetTotalEvents(23,117);
   den_clone113->SetPassedEvents(23,56);
   den_clone113->SetTotalEvents(24,0);
   den_clone113->SetPassedEvents(24,0);
   den_clone113->SetTotalEvents(25,0);
   den_clone113->SetPassedEvents(25,0);
   den_clone113->SetTotalEvents(26,0);
   den_clone113->SetPassedEvents(26,0);
   den_clone113->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone113->SetLineColor(ci);
   den_clone113->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone113->SetMarkerColor(ci);
   den_clone113->SetMarkerStyle(21);
   den_clone113->Draw("same samep");
   
   TEfficiency * den_clone114 = new TEfficiency("den_clone","",25,1.6,2.2);
   
   den_clone114->SetConfidenceLevel(0.6826895);
   den_clone114->SetBetaAlpha(1);
   den_clone114->SetBetaBeta(1);
   den_clone114->SetWeight(1);
   den_clone114->SetStatisticOption(0);
   den_clone114->SetPosteriorMode(0);
   den_clone114->SetShortestInterval(0);
   den_clone114->SetTotalEvents(0,0);
   den_clone114->SetPassedEvents(0,0);
   den_clone114->SetTotalEvents(1,1249);
   den_clone114->SetPassedEvents(1,74);
   den_clone114->SetTotalEvents(2,1718);
   den_clone114->SetPassedEvents(2,3);
   den_clone114->SetTotalEvents(3,1621);
   den_clone114->SetPassedEvents(3,0);
   den_clone114->SetTotalEvents(4,1755);
   den_clone114->SetPassedEvents(4,0);
   den_clone114->SetTotalEvents(5,1544);
   den_clone114->SetPassedEvents(5,2);
   den_clone114->SetTotalEvents(6,1633);
   den_clone114->SetPassedEvents(6,2);
   den_clone114->SetTotalEvents(7,1644);
   den_clone114->SetPassedEvents(7,2);
   den_clone114->SetTotalEvents(8,1525);
   den_clone114->SetPassedEvents(8,1);
   den_clone114->SetTotalEvents(9,1623);
   den_clone114->SetPassedEvents(9,1);
   den_clone114->SetTotalEvents(10,1746);
   den_clone114->SetPassedEvents(10,0);
   den_clone114->SetTotalEvents(11,1660);
   den_clone114->SetPassedEvents(11,1);
   den_clone114->SetTotalEvents(12,1577);
   den_clone114->SetPassedEvents(12,3);
   den_clone114->SetTotalEvents(13,1711);
   den_clone114->SetPassedEvents(13,1);
   den_clone114->SetTotalEvents(14,1686);
   den_clone114->SetPassedEvents(14,1);
   den_clone114->SetTotalEvents(15,1657);
   den_clone114->SetPassedEvents(15,1);
   den_clone114->SetTotalEvents(16,1666);
   den_clone114->SetPassedEvents(16,0);
   den_clone114->SetTotalEvents(17,1669);
   den_clone114->SetPassedEvents(17,0);
   den_clone114->SetTotalEvents(18,1627);
   den_clone114->SetPassedEvents(18,5);
   den_clone114->SetTotalEvents(19,1614);
   den_clone114->SetPassedEvents(19,3);
   den_clone114->SetTotalEvents(20,1635);
   den_clone114->SetPassedEvents(20,40);
   den_clone114->SetTotalEvents(21,998);
   den_clone114->SetPassedEvents(21,27);
   den_clone114->SetTotalEvents(22,763);
   den_clone114->SetPassedEvents(22,48);
   den_clone114->SetTotalEvents(23,117);
   den_clone114->SetPassedEvents(23,23);
   den_clone114->SetTotalEvents(24,0);
   den_clone114->SetPassedEvents(24,0);
   den_clone114->SetTotalEvents(25,0);
   den_clone114->SetPassedEvents(25,0);
   den_clone114->SetTotalEvents(26,0);
   den_clone114->SetPassedEvents(26,0);
   den_clone114->SetFillColor(19);
   den_clone114->SetLineWidth(2);
   den_clone114->SetMarkerStyle(23);
   den_clone114->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME1/b");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notALCTnotCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
