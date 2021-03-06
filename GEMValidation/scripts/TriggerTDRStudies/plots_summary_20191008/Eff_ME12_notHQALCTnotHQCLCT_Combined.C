void Eff_ME12_notHQALCTnotHQCLCT_Combined()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Oct  9 14:54:05 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.128571,-0.15375,1.72381,1.1275);
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
   
   TH1F *base__30 = new TH1F("base__30","",25,1.2,1.7);
   base__30->SetMinimum(0);
   base__30->SetMaximum(1.025);
   base__30->SetLineStyle(0);
   base__30->SetMarkerStyle(20);
   base__30->GetXaxis()->SetTitle("True muon |#eta|");
   base__30->GetXaxis()->SetLabelFont(42);
   base__30->GetXaxis()->SetLabelOffset(0.007);
   base__30->GetXaxis()->SetLabelSize(0.05);
   base__30->GetXaxis()->SetTitleSize(0.06);
   base__30->GetXaxis()->SetTitleOffset(0.9);
   base__30->GetXaxis()->SetTitleFont(42);
   base__30->GetYaxis()->SetTitle("Efficiency");
   base__30->GetYaxis()->SetLabelFont(42);
   base__30->GetYaxis()->SetLabelOffset(0.007);
   base__30->GetYaxis()->SetLabelSize(0.05);
   base__30->GetYaxis()->SetTitleSize(0.06);
   base__30->GetYaxis()->SetTitleOffset(0.9);
   base__30->GetYaxis()->SetTitleFont(42);
   base__30->GetZaxis()->SetLabelFont(42);
   base__30->GetZaxis()->SetLabelOffset(0.007);
   base__30->GetZaxis()->SetLabelSize(0.05);
   base__30->GetZaxis()->SetTitleSize(0.06);
   base__30->GetZaxis()->SetTitleFont(42);
   base__30->Draw("");
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
   
   TEfficiency * den_clone117 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone117->SetConfidenceLevel(0.6826895);
   den_clone117->SetBetaAlpha(1);
   den_clone117->SetBetaBeta(1);
   den_clone117->SetWeight(1);
   den_clone117->SetStatisticOption(0);
   den_clone117->SetPosteriorMode(0);
   den_clone117->SetShortestInterval(0);
   den_clone117->SetTotalEvents(0,0);
   den_clone117->SetPassedEvents(0,0);
   den_clone117->SetTotalEvents(1,820);
   den_clone117->SetPassedEvents(1,41);
   den_clone117->SetTotalEvents(2,1213);
   den_clone117->SetPassedEvents(2,84);
   den_clone117->SetTotalEvents(3,1354);
   den_clone117->SetPassedEvents(3,0);
   den_clone117->SetTotalEvents(4,1323);
   den_clone117->SetPassedEvents(4,1);
   den_clone117->SetTotalEvents(5,1390);
   den_clone117->SetPassedEvents(5,2);
   den_clone117->SetTotalEvents(6,1462);
   den_clone117->SetPassedEvents(6,2);
   den_clone117->SetTotalEvents(7,1398);
   den_clone117->SetPassedEvents(7,3);
   den_clone117->SetTotalEvents(8,1433);
   den_clone117->SetPassedEvents(8,0);
   den_clone117->SetTotalEvents(9,1329);
   den_clone117->SetPassedEvents(9,3);
   den_clone117->SetTotalEvents(10,1404);
   den_clone117->SetPassedEvents(10,4);
   den_clone117->SetTotalEvents(11,1430);
   den_clone117->SetPassedEvents(11,1);
   den_clone117->SetTotalEvents(12,1367);
   den_clone117->SetPassedEvents(12,4);
   den_clone117->SetTotalEvents(13,1349);
   den_clone117->SetPassedEvents(13,15);
   den_clone117->SetTotalEvents(14,1357);
   den_clone117->SetPassedEvents(14,24);
   den_clone117->SetTotalEvents(15,1298);
   den_clone117->SetPassedEvents(15,55);
   den_clone117->SetTotalEvents(16,1436);
   den_clone117->SetPassedEvents(16,10);
   den_clone117->SetTotalEvents(17,1307);
   den_clone117->SetPassedEvents(17,0);
   den_clone117->SetTotalEvents(18,1268);
   den_clone117->SetPassedEvents(18,3);
   den_clone117->SetTotalEvents(19,1329);
   den_clone117->SetPassedEvents(19,3);
   den_clone117->SetTotalEvents(20,1413);
   den_clone117->SetPassedEvents(20,1);
   den_clone117->SetTotalEvents(21,1263);
   den_clone117->SetPassedEvents(21,31);
   den_clone117->SetTotalEvents(22,804);
   den_clone117->SetPassedEvents(22,55);
   den_clone117->SetTotalEvents(23,621);
   den_clone117->SetPassedEvents(23,58);
   den_clone117->SetTotalEvents(24,81);
   den_clone117->SetPassedEvents(24,42);
   den_clone117->SetTotalEvents(25,0);
   den_clone117->SetPassedEvents(25,0);
   den_clone117->SetTotalEvents(26,0);
   den_clone117->SetPassedEvents(26,0);
   den_clone117->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   den_clone117->SetLineColor(ci);
   den_clone117->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone117->SetMarkerColor(ci);
   den_clone117->SetMarkerStyle(22);
   den_clone117->Draw("same samep");
   
   TEfficiency * den_clone118 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone118->SetConfidenceLevel(0.6826895);
   den_clone118->SetBetaAlpha(1);
   den_clone118->SetBetaBeta(1);
   den_clone118->SetWeight(1);
   den_clone118->SetStatisticOption(0);
   den_clone118->SetPosteriorMode(0);
   den_clone118->SetShortestInterval(0);
   den_clone118->SetTotalEvents(0,0);
   den_clone118->SetPassedEvents(0,0);
   den_clone118->SetTotalEvents(1,771);
   den_clone118->SetPassedEvents(1,39);
   den_clone118->SetTotalEvents(2,1220);
   den_clone118->SetPassedEvents(2,76);
   den_clone118->SetTotalEvents(3,1397);
   den_clone118->SetPassedEvents(3,4);
   den_clone118->SetTotalEvents(4,1411);
   den_clone118->SetPassedEvents(4,1);
   den_clone118->SetTotalEvents(5,1475);
   den_clone118->SetPassedEvents(5,1);
   den_clone118->SetTotalEvents(6,1407);
   den_clone118->SetPassedEvents(6,1);
   den_clone118->SetTotalEvents(7,1358);
   den_clone118->SetPassedEvents(7,0);
   den_clone118->SetTotalEvents(8,1366);
   den_clone118->SetPassedEvents(8,1);
   den_clone118->SetTotalEvents(9,1305);
   den_clone118->SetPassedEvents(9,1);
   den_clone118->SetTotalEvents(10,1465);
   den_clone118->SetPassedEvents(10,5);
   den_clone118->SetTotalEvents(11,1413);
   den_clone118->SetPassedEvents(11,6);
   den_clone118->SetTotalEvents(12,1344);
   den_clone118->SetPassedEvents(12,6);
   den_clone118->SetTotalEvents(13,1435);
   den_clone118->SetPassedEvents(13,19);
   den_clone118->SetTotalEvents(14,1403);
   den_clone118->SetPassedEvents(14,24);
   den_clone118->SetTotalEvents(15,1342);
   den_clone118->SetPassedEvents(15,63);
   den_clone118->SetTotalEvents(16,1332);
   den_clone118->SetPassedEvents(16,11);
   den_clone118->SetTotalEvents(17,1446);
   den_clone118->SetPassedEvents(17,5);
   den_clone118->SetTotalEvents(18,1424);
   den_clone118->SetPassedEvents(18,6);
   den_clone118->SetTotalEvents(19,1381);
   den_clone118->SetPassedEvents(19,5);
   den_clone118->SetTotalEvents(20,1389);
   den_clone118->SetPassedEvents(20,5);
   den_clone118->SetTotalEvents(21,1197);
   den_clone118->SetPassedEvents(21,40);
   den_clone118->SetTotalEvents(22,900);
   den_clone118->SetPassedEvents(22,77);
   den_clone118->SetTotalEvents(23,639);
   den_clone118->SetPassedEvents(23,71);
   den_clone118->SetTotalEvents(24,66);
   den_clone118->SetPassedEvents(24,30);
   den_clone118->SetTotalEvents(25,0);
   den_clone118->SetPassedEvents(25,0);
   den_clone118->SetTotalEvents(26,0);
   den_clone118->SetPassedEvents(26,0);
   den_clone118->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone118->SetLineColor(ci);
   den_clone118->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone118->SetMarkerColor(ci);
   den_clone118->SetMarkerStyle(21);
   den_clone118->Draw("same samep");
   
   TEfficiency * den_clone119 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone119->SetConfidenceLevel(0.6826895);
   den_clone119->SetBetaAlpha(1);
   den_clone119->SetBetaBeta(1);
   den_clone119->SetWeight(1);
   den_clone119->SetStatisticOption(0);
   den_clone119->SetPosteriorMode(0);
   den_clone119->SetShortestInterval(0);
   den_clone119->SetTotalEvents(0,0);
   den_clone119->SetPassedEvents(0,0);
   den_clone119->SetTotalEvents(1,771);
   den_clone119->SetPassedEvents(1,39);
   den_clone119->SetTotalEvents(2,1220);
   den_clone119->SetPassedEvents(2,76);
   den_clone119->SetTotalEvents(3,1397);
   den_clone119->SetPassedEvents(3,4);
   den_clone119->SetTotalEvents(4,1411);
   den_clone119->SetPassedEvents(4,1);
   den_clone119->SetTotalEvents(5,1475);
   den_clone119->SetPassedEvents(5,1);
   den_clone119->SetTotalEvents(6,1407);
   den_clone119->SetPassedEvents(6,1);
   den_clone119->SetTotalEvents(7,1358);
   den_clone119->SetPassedEvents(7,0);
   den_clone119->SetTotalEvents(8,1366);
   den_clone119->SetPassedEvents(8,1);
   den_clone119->SetTotalEvents(9,1305);
   den_clone119->SetPassedEvents(9,1);
   den_clone119->SetTotalEvents(10,1465);
   den_clone119->SetPassedEvents(10,5);
   den_clone119->SetTotalEvents(11,1413);
   den_clone119->SetPassedEvents(11,6);
   den_clone119->SetTotalEvents(12,1344);
   den_clone119->SetPassedEvents(12,6);
   den_clone119->SetTotalEvents(13,1435);
   den_clone119->SetPassedEvents(13,19);
   den_clone119->SetTotalEvents(14,1403);
   den_clone119->SetPassedEvents(14,24);
   den_clone119->SetTotalEvents(15,1342);
   den_clone119->SetPassedEvents(15,63);
   den_clone119->SetTotalEvents(16,1332);
   den_clone119->SetPassedEvents(16,11);
   den_clone119->SetTotalEvents(17,1446);
   den_clone119->SetPassedEvents(17,5);
   den_clone119->SetTotalEvents(18,1424);
   den_clone119->SetPassedEvents(18,6);
   den_clone119->SetTotalEvents(19,1381);
   den_clone119->SetPassedEvents(19,5);
   den_clone119->SetTotalEvents(20,1389);
   den_clone119->SetPassedEvents(20,5);
   den_clone119->SetTotalEvents(21,1197);
   den_clone119->SetPassedEvents(21,40);
   den_clone119->SetTotalEvents(22,900);
   den_clone119->SetPassedEvents(22,77);
   den_clone119->SetTotalEvents(23,639);
   den_clone119->SetPassedEvents(23,71);
   den_clone119->SetTotalEvents(24,66);
   den_clone119->SetPassedEvents(24,30);
   den_clone119->SetTotalEvents(25,0);
   den_clone119->SetPassedEvents(25,0);
   den_clone119->SetTotalEvents(26,0);
   den_clone119->SetPassedEvents(26,0);
   den_clone119->SetFillColor(19);
   den_clone119->SetLineWidth(2);
   den_clone119->SetMarkerStyle(23);
   den_clone119->Draw("same samep");
   
   TEfficiency * den_clone120 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone120->SetConfidenceLevel(0.6826895);
   den_clone120->SetBetaAlpha(1);
   den_clone120->SetBetaBeta(1);
   den_clone120->SetWeight(1);
   den_clone120->SetStatisticOption(0);
   den_clone120->SetPosteriorMode(0);
   den_clone120->SetShortestInterval(0);
   den_clone120->SetTotalEvents(0,0);
   den_clone120->SetPassedEvents(0,0);
   den_clone120->SetTotalEvents(1,222);
   den_clone120->SetPassedEvents(1,1);
   den_clone120->SetTotalEvents(2,423);
   den_clone120->SetPassedEvents(2,0);
   den_clone120->SetTotalEvents(3,523);
   den_clone120->SetPassedEvents(3,0);
   den_clone120->SetTotalEvents(4,488);
   den_clone120->SetPassedEvents(4,0);
   den_clone120->SetTotalEvents(5,562);
   den_clone120->SetPassedEvents(5,1);
   den_clone120->SetTotalEvents(6,469);
   den_clone120->SetPassedEvents(6,0);
   den_clone120->SetTotalEvents(7,484);
   den_clone120->SetPassedEvents(7,2);
   den_clone120->SetTotalEvents(8,449);
   den_clone120->SetPassedEvents(8,1);
   den_clone120->SetTotalEvents(9,453);
   den_clone120->SetPassedEvents(9,0);
   den_clone120->SetTotalEvents(10,482);
   den_clone120->SetPassedEvents(10,0);
   den_clone120->SetTotalEvents(11,490);
   den_clone120->SetPassedEvents(11,0);
   den_clone120->SetTotalEvents(12,552);
   den_clone120->SetPassedEvents(12,1);
   den_clone120->SetTotalEvents(13,489);
   den_clone120->SetPassedEvents(13,6);
   den_clone120->SetTotalEvents(14,492);
   den_clone120->SetPassedEvents(14,4);
   den_clone120->SetTotalEvents(15,416);
   den_clone120->SetPassedEvents(15,4);
   den_clone120->SetTotalEvents(16,473);
   den_clone120->SetPassedEvents(16,0);
   den_clone120->SetTotalEvents(17,486);
   den_clone120->SetPassedEvents(17,1);
   den_clone120->SetTotalEvents(18,496);
   den_clone120->SetPassedEvents(18,3);
   den_clone120->SetTotalEvents(19,504);
   den_clone120->SetPassedEvents(19,1);
   den_clone120->SetTotalEvents(20,527);
   den_clone120->SetPassedEvents(20,0);
   den_clone120->SetTotalEvents(21,432);
   den_clone120->SetPassedEvents(21,2);
   den_clone120->SetTotalEvents(22,274);
   den_clone120->SetPassedEvents(22,2);
   den_clone120->SetTotalEvents(23,157);
   den_clone120->SetPassedEvents(23,1);
   den_clone120->SetTotalEvents(24,13);
   den_clone120->SetPassedEvents(24,0);
   den_clone120->SetTotalEvents(25,0);
   den_clone120->SetPassedEvents(25,0);
   den_clone120->SetTotalEvents(26,0);
   den_clone120->SetPassedEvents(26,0);
   den_clone120->SetFillColor(19);

   ci = TColor::GetColor("#00cc00");
   den_clone120->SetLineColor(ci);
   den_clone120->SetLineWidth(2);

   ci = TColor::GetColor("#00cc00");
   den_clone120->SetMarkerColor(ci);
   den_clone120->SetMarkerStyle(23);
   den_clone120->Draw("same samep");
   
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
   TText *text = new TText(0.17,0.17,"ME1/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"notHQALCTnotHQCLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
