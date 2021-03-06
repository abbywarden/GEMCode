void Eff_ME41_notALCTnotCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 14:55:10 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.714286,-0.15375,2.428571,1.1275);
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
   
   TH1F *base__68 = new TH1F("base__68","",25,1.8,2.4);
   base__68->SetMinimum(0);
   base__68->SetMaximum(1.025);
   base__68->SetLineStyle(0);
   base__68->SetMarkerStyle(20);
   base__68->GetXaxis()->SetTitle("True muon |#eta|");
   base__68->GetXaxis()->SetLabelFont(42);
   base__68->GetXaxis()->SetLabelOffset(0.007);
   base__68->GetXaxis()->SetLabelSize(0.05);
   base__68->GetXaxis()->SetTitleSize(0.06);
   base__68->GetXaxis()->SetTitleOffset(0.9);
   base__68->GetXaxis()->SetTitleFont(42);
   base__68->GetYaxis()->SetTitle("Efficiency");
   base__68->GetYaxis()->SetLabelFont(42);
   base__68->GetYaxis()->SetLabelOffset(0.007);
   base__68->GetYaxis()->SetLabelSize(0.05);
   base__68->GetYaxis()->SetTitleSize(0.06);
   base__68->GetYaxis()->SetTitleOffset(0.9);
   base__68->GetYaxis()->SetTitleFont(42);
   base__68->GetZaxis()->SetLabelFont(42);
   base__68->GetZaxis()->SetLabelOffset(0.007);
   base__68->GetZaxis()->SetLabelSize(0.05);
   base__68->GetZaxis()->SetTitleSize(0.06);
   base__68->GetZaxis()->SetTitleFont(42);
   base__68->Draw("");
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
   
   TEfficiency * den_clone269 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone269->SetConfidenceLevel(0.6826895);
   den_clone269->SetBetaAlpha(1);
   den_clone269->SetBetaBeta(1);
   den_clone269->SetWeight(1);
   den_clone269->SetStatisticOption(0);
   den_clone269->SetPosteriorMode(0);
   den_clone269->SetShortestInterval(0);
   den_clone269->SetTotalEvents(0,0);
   den_clone269->SetPassedEvents(0,0);
   den_clone269->SetTotalEvents(1,384);
   den_clone269->SetPassedEvents(1,60);
   den_clone269->SetTotalEvents(2,1206);
   den_clone269->SetPassedEvents(2,53);
   den_clone269->SetTotalEvents(3,1660);
   den_clone269->SetPassedEvents(3,13);
   den_clone269->SetTotalEvents(4,1637);
   den_clone269->SetPassedEvents(4,2);
   den_clone269->SetTotalEvents(5,1600);
   den_clone269->SetPassedEvents(5,5);
   den_clone269->SetTotalEvents(6,1744);
   den_clone269->SetPassedEvents(6,7);
   den_clone269->SetTotalEvents(7,1690);
   den_clone269->SetPassedEvents(7,93);
   den_clone269->SetTotalEvents(8,1651);
   den_clone269->SetPassedEvents(8,256);
   den_clone269->SetTotalEvents(9,1621);
   den_clone269->SetPassedEvents(9,140);
   den_clone269->SetTotalEvents(10,1622);
   den_clone269->SetPassedEvents(10,2);
   den_clone269->SetTotalEvents(11,1604);
   den_clone269->SetPassedEvents(11,1);
   den_clone269->SetTotalEvents(12,1562);
   den_clone269->SetPassedEvents(12,3);
   den_clone269->SetTotalEvents(13,1540);
   den_clone269->SetPassedEvents(13,3);
   den_clone269->SetTotalEvents(14,1674);
   den_clone269->SetPassedEvents(14,12);
   den_clone269->SetTotalEvents(15,1562);
   den_clone269->SetPassedEvents(15,106);
   den_clone269->SetTotalEvents(16,1466);
   den_clone269->SetPassedEvents(16,146);
   den_clone269->SetTotalEvents(17,1545);
   den_clone269->SetPassedEvents(17,62);
   den_clone269->SetTotalEvents(18,1726);
   den_clone269->SetPassedEvents(18,5);
   den_clone269->SetTotalEvents(19,1733);
   den_clone269->SetPassedEvents(19,4);
   den_clone269->SetTotalEvents(20,1676);
   den_clone269->SetPassedEvents(20,3);
   den_clone269->SetTotalEvents(21,1605);
   den_clone269->SetPassedEvents(21,5);
   den_clone269->SetTotalEvents(22,1742);
   den_clone269->SetPassedEvents(22,7);
   den_clone269->SetTotalEvents(23,1686);
   den_clone269->SetPassedEvents(23,5);
   den_clone269->SetTotalEvents(24,1623);
   den_clone269->SetPassedEvents(24,11);
   den_clone269->SetTotalEvents(25,1231);
   den_clone269->SetPassedEvents(25,80);
   den_clone269->SetTotalEvents(26,0);
   den_clone269->SetPassedEvents(26,0);
   den_clone269->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone269->SetLineColor(ci);
   den_clone269->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone269->SetMarkerColor(ci);
   den_clone269->SetMarkerStyle(22);
   den_clone269->Draw("same samep");
   
   TEfficiency * den_clone270 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone270->SetConfidenceLevel(0.6826895);
   den_clone270->SetBetaAlpha(1);
   den_clone270->SetBetaBeta(1);
   den_clone270->SetWeight(1);
   den_clone270->SetStatisticOption(0);
   den_clone270->SetPosteriorMode(0);
   den_clone270->SetShortestInterval(0);
   den_clone270->SetTotalEvents(0,0);
   den_clone270->SetPassedEvents(0,0);
   den_clone270->SetTotalEvents(1,419);
   den_clone270->SetPassedEvents(1,68);
   den_clone270->SetTotalEvents(2,1266);
   den_clone270->SetPassedEvents(2,75);
   den_clone270->SetTotalEvents(3,1615);
   den_clone270->SetPassedEvents(3,9);
   den_clone270->SetTotalEvents(4,1644);
   den_clone270->SetPassedEvents(4,6);
   den_clone270->SetTotalEvents(5,1669);
   den_clone270->SetPassedEvents(5,2);
   den_clone270->SetTotalEvents(6,1730);
   den_clone270->SetPassedEvents(6,6);
   den_clone270->SetTotalEvents(7,1670);
   den_clone270->SetPassedEvents(7,91);
   den_clone270->SetTotalEvents(8,1608);
   den_clone270->SetPassedEvents(8,249);
   den_clone270->SetTotalEvents(9,1563);
   den_clone270->SetPassedEvents(9,147);
   den_clone270->SetTotalEvents(10,1655);
   den_clone270->SetPassedEvents(10,5);
   den_clone270->SetTotalEvents(11,1672);
   den_clone270->SetPassedEvents(11,4);
   den_clone270->SetTotalEvents(12,1684);
   den_clone270->SetPassedEvents(12,5);
   den_clone270->SetTotalEvents(13,1670);
   den_clone270->SetPassedEvents(13,5);
   den_clone270->SetTotalEvents(14,1681);
   den_clone270->SetPassedEvents(14,13);
   den_clone270->SetTotalEvents(15,1440);
   den_clone270->SetPassedEvents(15,114);
   den_clone270->SetTotalEvents(16,1495);
   den_clone270->SetPassedEvents(16,139);
   den_clone270->SetTotalEvents(17,1640);
   den_clone270->SetPassedEvents(17,56);
   den_clone270->SetTotalEvents(18,1602);
   den_clone270->SetPassedEvents(18,5);
   den_clone270->SetTotalEvents(19,1626);
   den_clone270->SetPassedEvents(19,4);
   den_clone270->SetTotalEvents(20,1674);
   den_clone270->SetPassedEvents(20,9);
   den_clone270->SetTotalEvents(21,1670);
   den_clone270->SetPassedEvents(21,5);
   den_clone270->SetTotalEvents(22,1674);
   den_clone270->SetPassedEvents(22,4);
   den_clone270->SetTotalEvents(23,1598);
   den_clone270->SetPassedEvents(23,9);
   den_clone270->SetTotalEvents(24,1580);
   den_clone270->SetPassedEvents(24,13);
   den_clone270->SetTotalEvents(25,1205);
   den_clone270->SetPassedEvents(25,68);
   den_clone270->SetTotalEvents(26,0);
   den_clone270->SetPassedEvents(26,0);
   den_clone270->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone270->SetLineColor(ci);
   den_clone270->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone270->SetMarkerColor(ci);
   den_clone270->SetMarkerStyle(21);
   den_clone270->Draw("same samep");
   
   TEfficiency * den_clone271 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone271->SetConfidenceLevel(0.6826895);
   den_clone271->SetBetaAlpha(1);
   den_clone271->SetBetaBeta(1);
   den_clone271->SetWeight(1);
   den_clone271->SetStatisticOption(0);
   den_clone271->SetPosteriorMode(0);
   den_clone271->SetShortestInterval(0);
   den_clone271->SetTotalEvents(0,0);
   den_clone271->SetPassedEvents(0,0);
   den_clone271->SetTotalEvents(1,419);
   den_clone271->SetPassedEvents(1,70);
   den_clone271->SetTotalEvents(2,1266);
   den_clone271->SetPassedEvents(2,74);
   den_clone271->SetTotalEvents(3,1615);
   den_clone271->SetPassedEvents(3,11);
   den_clone271->SetTotalEvents(4,1644);
   den_clone271->SetPassedEvents(4,4);
   den_clone271->SetTotalEvents(5,1669);
   den_clone271->SetPassedEvents(5,1);
   den_clone271->SetTotalEvents(6,1730);
   den_clone271->SetPassedEvents(6,5);
   den_clone271->SetTotalEvents(7,1670);
   den_clone271->SetPassedEvents(7,104);
   den_clone271->SetTotalEvents(8,1608);
   den_clone271->SetPassedEvents(8,275);
   den_clone271->SetTotalEvents(9,1563);
   den_clone271->SetPassedEvents(9,153);
   den_clone271->SetTotalEvents(10,1655);
   den_clone271->SetPassedEvents(10,4);
   den_clone271->SetTotalEvents(11,1672);
   den_clone271->SetPassedEvents(11,2);
   den_clone271->SetTotalEvents(12,1684);
   den_clone271->SetPassedEvents(12,2);
   den_clone271->SetTotalEvents(13,1670);
   den_clone271->SetPassedEvents(13,3);
   den_clone271->SetTotalEvents(14,1681);
   den_clone271->SetPassedEvents(14,10);
   den_clone271->SetTotalEvents(15,1440);
   den_clone271->SetPassedEvents(15,125);
   den_clone271->SetTotalEvents(16,1495);
   den_clone271->SetPassedEvents(16,154);
   den_clone271->SetTotalEvents(17,1640);
   den_clone271->SetPassedEvents(17,52);
   den_clone271->SetTotalEvents(18,1602);
   den_clone271->SetPassedEvents(18,3);
   den_clone271->SetTotalEvents(19,1626);
   den_clone271->SetPassedEvents(19,1);
   den_clone271->SetTotalEvents(20,1674);
   den_clone271->SetPassedEvents(20,4);
   den_clone271->SetTotalEvents(21,1670);
   den_clone271->SetPassedEvents(21,1);
   den_clone271->SetTotalEvents(22,1674);
   den_clone271->SetPassedEvents(22,2);
   den_clone271->SetTotalEvents(23,1598);
   den_clone271->SetPassedEvents(23,5);
   den_clone271->SetTotalEvents(24,1580);
   den_clone271->SetPassedEvents(24,8);
   den_clone271->SetTotalEvents(25,1205);
   den_clone271->SetPassedEvents(25,62);
   den_clone271->SetTotalEvents(26,0);
   den_clone271->SetPassedEvents(26,0);
   den_clone271->SetFillColor(19);
   den_clone271->SetLineWidth(2);
   den_clone271->SetMarkerStyle(23);
   den_clone271->Draw("same samep");
   
   TEfficiency * den_clone272 = new TEfficiency("den_clone","",25,1.8,2.4);
   
   den_clone272->SetConfidenceLevel(0.6826895);
   den_clone272->SetBetaAlpha(1);
   den_clone272->SetBetaBeta(1);
   den_clone272->SetWeight(1);
   den_clone272->SetStatisticOption(0);
   den_clone272->SetPosteriorMode(0);
   den_clone272->SetShortestInterval(0);
   den_clone272->SetTotalEvents(0,0);
   den_clone272->SetPassedEvents(0,0);
   den_clone272->SetTotalEvents(1,136);
   den_clone272->SetPassedEvents(1,2);
   den_clone272->SetTotalEvents(2,443);
   den_clone272->SetPassedEvents(2,1);
   den_clone272->SetTotalEvents(3,557);
   den_clone272->SetPassedEvents(3,0);
   den_clone272->SetTotalEvents(4,578);
   den_clone272->SetPassedEvents(4,1);
   den_clone272->SetTotalEvents(5,561);
   den_clone272->SetPassedEvents(5,1);
   den_clone272->SetTotalEvents(6,563);
   den_clone272->SetPassedEvents(6,0);
   den_clone272->SetTotalEvents(7,584);
   den_clone272->SetPassedEvents(7,6);
   den_clone272->SetTotalEvents(8,440);
   den_clone272->SetPassedEvents(8,10);
   den_clone272->SetTotalEvents(9,544);
   den_clone272->SetPassedEvents(9,4);
   den_clone272->SetTotalEvents(10,555);
   den_clone272->SetPassedEvents(10,0);
   den_clone272->SetTotalEvents(11,607);
   den_clone272->SetPassedEvents(11,1);
   den_clone272->SetTotalEvents(12,566);
   den_clone272->SetPassedEvents(12,1);
   den_clone272->SetTotalEvents(13,586);
   den_clone272->SetPassedEvents(13,0);
   den_clone272->SetTotalEvents(14,603);
   den_clone272->SetPassedEvents(14,2);
   den_clone272->SetTotalEvents(15,488);
   den_clone272->SetPassedEvents(15,5);
   den_clone272->SetTotalEvents(16,437);
   den_clone272->SetPassedEvents(16,6);
   den_clone272->SetTotalEvents(17,580);
   den_clone272->SetPassedEvents(17,0);
   den_clone272->SetTotalEvents(18,623);
   den_clone272->SetPassedEvents(18,1);
   den_clone272->SetTotalEvents(19,550);
   den_clone272->SetPassedEvents(19,3);
   den_clone272->SetTotalEvents(20,571);
   den_clone272->SetPassedEvents(20,0);
   den_clone272->SetTotalEvents(21,663);
   den_clone272->SetPassedEvents(21,2);
   den_clone272->SetTotalEvents(22,540);
   den_clone272->SetPassedEvents(22,1);
   den_clone272->SetTotalEvents(23,642);
   den_clone272->SetPassedEvents(23,1);
   den_clone272->SetTotalEvents(24,595);
   den_clone272->SetPassedEvents(24,0);
   den_clone272->SetTotalEvents(25,380);
   den_clone272->SetPassedEvents(25,1);
   den_clone272->SetTotalEvents(26,0);
   den_clone272->SetPassedEvents(26,0);
   den_clone272->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone272->SetLineColor(ci);
   den_clone272->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone272->SetMarkerColor(ci);
   den_clone272->SetMarkerStyle(23);
   den_clone272->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME4/1");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notALCTnotCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
