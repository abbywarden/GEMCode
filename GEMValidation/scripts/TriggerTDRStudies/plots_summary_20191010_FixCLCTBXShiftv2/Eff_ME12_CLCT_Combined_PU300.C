void Eff_ME12_CLCT_Combined_PU300()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 11 07:50:15 2019) by ROOT version 6.14/09
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(1.128571,0.42125,1.72381,1.0775);
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
   
   TH1F *base__49 = new TH1F("base__49","",25,1.2,1.7);
   base__49->SetMinimum(0.5);
   base__49->SetMaximum(1.025);
   base__49->SetLineStyle(0);
   base__49->SetMarkerStyle(20);
   base__49->GetXaxis()->SetTitle("True muon |#eta|");
   base__49->GetXaxis()->SetLabelFont(42);
   base__49->GetXaxis()->SetLabelOffset(0.007);
   base__49->GetXaxis()->SetLabelSize(0.05);
   base__49->GetXaxis()->SetTitleSize(0.06);
   base__49->GetXaxis()->SetTitleOffset(0.9);
   base__49->GetXaxis()->SetTitleFont(42);
   base__49->GetYaxis()->SetTitle("Efficiency");
   base__49->GetYaxis()->SetLabelFont(42);
   base__49->GetYaxis()->SetLabelOffset(0.007);
   base__49->GetYaxis()->SetLabelSize(0.05);
   base__49->GetYaxis()->SetTitleSize(0.06);
   base__49->GetYaxis()->SetTitleOffset(0.9);
   base__49->GetYaxis()->SetTitleFont(42);
   base__49->GetZaxis()->SetLabelFont(42);
   base__49->GetZaxis()->SetLabelOffset(0.007);
   base__49->GetZaxis()->SetLabelSize(0.05);
   base__49->GetZaxis()->SetTitleSize(0.06);
   base__49->GetZaxis()->SetTitleFont(42);
   base__49->Draw("");
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
   
   TEfficiency * den_clone181 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone181->SetConfidenceLevel(0.6826895);
   den_clone181->SetBetaAlpha(1);
   den_clone181->SetBetaBeta(1);
   den_clone181->SetWeight(1);
   den_clone181->SetStatisticOption(0);
   den_clone181->SetPosteriorMode(0);
   den_clone181->SetShortestInterval(0);
   den_clone181->SetTotalEvents(0,0);
   den_clone181->SetPassedEvents(0,0);
   den_clone181->SetTotalEvents(1,771);
   den_clone181->SetPassedEvents(1,691);
   den_clone181->SetTotalEvents(2,1220);
   den_clone181->SetPassedEvents(2,1070);
   den_clone181->SetTotalEvents(3,1397);
   den_clone181->SetPassedEvents(3,1351);
   den_clone181->SetTotalEvents(4,1411);
   den_clone181->SetPassedEvents(4,1371);
   den_clone181->SetTotalEvents(5,1475);
   den_clone181->SetPassedEvents(5,1346);
   den_clone181->SetTotalEvents(6,1407);
   den_clone181->SetPassedEvents(6,1269);
   den_clone181->SetTotalEvents(7,1358);
   den_clone181->SetPassedEvents(7,1215);
   den_clone181->SetTotalEvents(8,1366);
   den_clone181->SetPassedEvents(8,1290);
   den_clone181->SetTotalEvents(9,1305);
   den_clone181->SetPassedEvents(9,1271);
   den_clone181->SetTotalEvents(10,1465);
   den_clone181->SetPassedEvents(10,1419);
   den_clone181->SetTotalEvents(11,1413);
   den_clone181->SetPassedEvents(11,1369);
   den_clone181->SetTotalEvents(12,1344);
   den_clone181->SetPassedEvents(12,1270);
   den_clone181->SetTotalEvents(13,1435);
   den_clone181->SetPassedEvents(13,1156);
   den_clone181->SetTotalEvents(14,1403);
   den_clone181->SetPassedEvents(14,1170);
   den_clone181->SetTotalEvents(15,1342);
   den_clone181->SetPassedEvents(15,1057);
   den_clone181->SetTotalEvents(16,1332);
   den_clone181->SetPassedEvents(16,1225);
   den_clone181->SetTotalEvents(17,1446);
   den_clone181->SetPassedEvents(17,1377);
   den_clone181->SetTotalEvents(18,1424);
   den_clone181->SetPassedEvents(18,1355);
   den_clone181->SetTotalEvents(19,1381);
   den_clone181->SetPassedEvents(19,1320);
   den_clone181->SetTotalEvents(20,1389);
   den_clone181->SetPassedEvents(20,1300);
   den_clone181->SetTotalEvents(21,1197);
   den_clone181->SetPassedEvents(21,1054);
   den_clone181->SetTotalEvents(22,900);
   den_clone181->SetPassedEvents(22,732);
   den_clone181->SetTotalEvents(23,639);
   den_clone181->SetPassedEvents(23,460);
   den_clone181->SetTotalEvents(24,66);
   den_clone181->SetPassedEvents(24,20);
   den_clone181->SetTotalEvents(25,0);
   den_clone181->SetPassedEvents(25,0);
   den_clone181->SetTotalEvents(26,0);
   den_clone181->SetPassedEvents(26,0);
   den_clone181->SetFillColor(19);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#999999");
   den_clone181->SetLineColor(ci);
   den_clone181->SetLineWidth(2);

   ci = TColor::GetColor("#999999");
   den_clone181->SetMarkerColor(ci);
   den_clone181->SetMarkerStyle(23);
   den_clone181->Draw("same samep");
   
   TEfficiency * den_clone182 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone182->SetConfidenceLevel(0.6826895);
   den_clone182->SetBetaAlpha(1);
   den_clone182->SetBetaBeta(1);
   den_clone182->SetWeight(1);
   den_clone182->SetStatisticOption(0);
   den_clone182->SetPosteriorMode(0);
   den_clone182->SetShortestInterval(0);
   den_clone182->SetTotalEvents(0,0);
   den_clone182->SetPassedEvents(0,0);
   den_clone182->SetTotalEvents(1,771);
   den_clone182->SetPassedEvents(1,691);
   den_clone182->SetTotalEvents(2,1220);
   den_clone182->SetPassedEvents(2,1070);
   den_clone182->SetTotalEvents(3,1397);
   den_clone182->SetPassedEvents(3,1351);
   den_clone182->SetTotalEvents(4,1411);
   den_clone182->SetPassedEvents(4,1371);
   den_clone182->SetTotalEvents(5,1475);
   den_clone182->SetPassedEvents(5,1346);
   den_clone182->SetTotalEvents(6,1407);
   den_clone182->SetPassedEvents(6,1269);
   den_clone182->SetTotalEvents(7,1358);
   den_clone182->SetPassedEvents(7,1215);
   den_clone182->SetTotalEvents(8,1366);
   den_clone182->SetPassedEvents(8,1290);
   den_clone182->SetTotalEvents(9,1305);
   den_clone182->SetPassedEvents(9,1271);
   den_clone182->SetTotalEvents(10,1465);
   den_clone182->SetPassedEvents(10,1419);
   den_clone182->SetTotalEvents(11,1413);
   den_clone182->SetPassedEvents(11,1369);
   den_clone182->SetTotalEvents(12,1344);
   den_clone182->SetPassedEvents(12,1270);
   den_clone182->SetTotalEvents(13,1435);
   den_clone182->SetPassedEvents(13,1156);
   den_clone182->SetTotalEvents(14,1403);
   den_clone182->SetPassedEvents(14,1170);
   den_clone182->SetTotalEvents(15,1342);
   den_clone182->SetPassedEvents(15,1057);
   den_clone182->SetTotalEvents(16,1332);
   den_clone182->SetPassedEvents(16,1225);
   den_clone182->SetTotalEvents(17,1446);
   den_clone182->SetPassedEvents(17,1377);
   den_clone182->SetTotalEvents(18,1424);
   den_clone182->SetPassedEvents(18,1355);
   den_clone182->SetTotalEvents(19,1381);
   den_clone182->SetPassedEvents(19,1320);
   den_clone182->SetTotalEvents(20,1389);
   den_clone182->SetPassedEvents(20,1300);
   den_clone182->SetTotalEvents(21,1197);
   den_clone182->SetPassedEvents(21,1054);
   den_clone182->SetTotalEvents(22,900);
   den_clone182->SetPassedEvents(22,732);
   den_clone182->SetTotalEvents(23,639);
   den_clone182->SetPassedEvents(23,460);
   den_clone182->SetTotalEvents(24,66);
   den_clone182->SetPassedEvents(24,20);
   den_clone182->SetTotalEvents(25,0);
   den_clone182->SetPassedEvents(25,0);
   den_clone182->SetTotalEvents(26,0);
   den_clone182->SetPassedEvents(26,0);
   den_clone182->SetFillColor(19);

   ci = TColor::GetColor("#ff0000");
   den_clone182->SetLineColor(ci);
   den_clone182->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   den_clone182->SetMarkerColor(ci);
   den_clone182->SetMarkerStyle(22);
   den_clone182->Draw("same samep");
   
   TEfficiency * den_clone183 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone183->SetConfidenceLevel(0.6826895);
   den_clone183->SetBetaAlpha(1);
   den_clone183->SetBetaBeta(1);
   den_clone183->SetWeight(1);
   den_clone183->SetStatisticOption(0);
   den_clone183->SetPosteriorMode(0);
   den_clone183->SetShortestInterval(0);
   den_clone183->SetTotalEvents(0,0);
   den_clone183->SetPassedEvents(0,0);
   den_clone183->SetTotalEvents(1,771);
   den_clone183->SetPassedEvents(1,691);
   den_clone183->SetTotalEvents(2,1220);
   den_clone183->SetPassedEvents(2,1070);
   den_clone183->SetTotalEvents(3,1397);
   den_clone183->SetPassedEvents(3,1351);
   den_clone183->SetTotalEvents(4,1411);
   den_clone183->SetPassedEvents(4,1371);
   den_clone183->SetTotalEvents(5,1475);
   den_clone183->SetPassedEvents(5,1346);
   den_clone183->SetTotalEvents(6,1407);
   den_clone183->SetPassedEvents(6,1269);
   den_clone183->SetTotalEvents(7,1358);
   den_clone183->SetPassedEvents(7,1215);
   den_clone183->SetTotalEvents(8,1366);
   den_clone183->SetPassedEvents(8,1290);
   den_clone183->SetTotalEvents(9,1305);
   den_clone183->SetPassedEvents(9,1271);
   den_clone183->SetTotalEvents(10,1465);
   den_clone183->SetPassedEvents(10,1419);
   den_clone183->SetTotalEvents(11,1413);
   den_clone183->SetPassedEvents(11,1369);
   den_clone183->SetTotalEvents(12,1344);
   den_clone183->SetPassedEvents(12,1270);
   den_clone183->SetTotalEvents(13,1435);
   den_clone183->SetPassedEvents(13,1156);
   den_clone183->SetTotalEvents(14,1403);
   den_clone183->SetPassedEvents(14,1170);
   den_clone183->SetTotalEvents(15,1342);
   den_clone183->SetPassedEvents(15,1057);
   den_clone183->SetTotalEvents(16,1332);
   den_clone183->SetPassedEvents(16,1225);
   den_clone183->SetTotalEvents(17,1446);
   den_clone183->SetPassedEvents(17,1377);
   den_clone183->SetTotalEvents(18,1424);
   den_clone183->SetPassedEvents(18,1355);
   den_clone183->SetTotalEvents(19,1381);
   den_clone183->SetPassedEvents(19,1320);
   den_clone183->SetTotalEvents(20,1389);
   den_clone183->SetPassedEvents(20,1300);
   den_clone183->SetTotalEvents(21,1197);
   den_clone183->SetPassedEvents(21,1054);
   den_clone183->SetTotalEvents(22,900);
   den_clone183->SetPassedEvents(22,732);
   den_clone183->SetTotalEvents(23,639);
   den_clone183->SetPassedEvents(23,460);
   den_clone183->SetTotalEvents(24,66);
   den_clone183->SetPassedEvents(24,20);
   den_clone183->SetTotalEvents(25,0);
   den_clone183->SetPassedEvents(25,0);
   den_clone183->SetTotalEvents(26,0);
   den_clone183->SetPassedEvents(26,0);
   den_clone183->SetFillColor(19);

   ci = TColor::GetColor("#0000ff");
   den_clone183->SetLineColor(ci);
   den_clone183->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   den_clone183->SetMarkerColor(ci);
   den_clone183->SetMarkerStyle(21);
   den_clone183->Draw("same samep");
   
   TEfficiency * den_clone184 = new TEfficiency("den_clone","",25,1.2,1.7);
   
   den_clone184->SetConfidenceLevel(0.6826895);
   den_clone184->SetBetaAlpha(1);
   den_clone184->SetBetaBeta(1);
   den_clone184->SetWeight(1);
   den_clone184->SetStatisticOption(0);
   den_clone184->SetPosteriorMode(0);
   den_clone184->SetShortestInterval(0);
   den_clone184->SetTotalEvents(0,0);
   den_clone184->SetPassedEvents(0,0);
   den_clone184->SetTotalEvents(1,240);
   den_clone184->SetPassedEvents(1,209);
   den_clone184->SetTotalEvents(2,451);
   den_clone184->SetPassedEvents(2,394);
   den_clone184->SetTotalEvents(3,523);
   den_clone184->SetPassedEvents(3,512);
   den_clone184->SetTotalEvents(4,488);
   den_clone184->SetPassedEvents(4,479);
   den_clone184->SetTotalEvents(5,562);
   den_clone184->SetPassedEvents(5,505);
   den_clone184->SetTotalEvents(6,469);
   den_clone184->SetPassedEvents(6,431);
   den_clone184->SetTotalEvents(7,484);
   den_clone184->SetPassedEvents(7,432);
   den_clone184->SetTotalEvents(8,451);
   den_clone184->SetPassedEvents(8,423);
   den_clone184->SetTotalEvents(9,454);
   den_clone184->SetPassedEvents(9,433);
   den_clone184->SetTotalEvents(10,483);
   den_clone184->SetPassedEvents(10,471);
   den_clone184->SetTotalEvents(11,491);
   den_clone184->SetPassedEvents(11,472);
   den_clone184->SetTotalEvents(12,552);
   den_clone184->SetPassedEvents(12,521);
   den_clone184->SetTotalEvents(13,494);
   den_clone184->SetPassedEvents(13,404);
   den_clone184->SetTotalEvents(14,493);
   den_clone184->SetPassedEvents(14,430);
   den_clone184->SetTotalEvents(15,439);
   den_clone184->SetPassedEvents(15,338);
   den_clone184->SetTotalEvents(16,476);
   den_clone184->SetPassedEvents(16,441);
   den_clone184->SetTotalEvents(17,486);
   den_clone184->SetPassedEvents(17,460);
   den_clone184->SetTotalEvents(18,496);
   den_clone184->SetPassedEvents(18,481);
   den_clone184->SetTotalEvents(19,504);
   den_clone184->SetPassedEvents(19,474);
   den_clone184->SetTotalEvents(20,527);
   den_clone184->SetPassedEvents(20,498);
   den_clone184->SetTotalEvents(21,452);
   den_clone184->SetPassedEvents(21,386);
   den_clone184->SetTotalEvents(22,297);
   den_clone184->SetPassedEvents(22,251);
   den_clone184->SetTotalEvents(23,190);
   den_clone184->SetPassedEvents(23,127);
   den_clone184->SetTotalEvents(24,27);
   den_clone184->SetPassedEvents(24,9);
   den_clone184->SetTotalEvents(25,0);
   den_clone184->SetPassedEvents(25,0);
   den_clone184->SetTotalEvents(26,0);
   den_clone184->SetPassedEvents(26,0);
   den_clone184->SetFillColor(19);
   den_clone184->SetLineWidth(2);
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
   leg->Draw();
   TText *text = new TText(0.17,0.17,"ME1/2");
   text->SetNDC();
   text->Draw();
   text = new TText(0.17,0.24,"CLCT");
   text->SetNDC();
   text->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
