//#include<iostream>
//#include<string>
//#include<vector>
//#include<math.h>
//#include<unordered_map>
//#include<stack>
//#include<map>
//using namespace std;
//
//class Solution {
//public:
//    string longestDupSubstring(string s) {
//        vector<int> count(26, 0);
//        unordered_map<int, unordered_map<string, vector<int>>> ans;
//        int n = s.size();
//        cout << n << " ";
//        int maxCount = 0;
//        for (char a : s) {
//            count[a - 'a']++;
//            maxCount = max(maxCount, count[a - 'a']);
//            if (count[a - 'a'] == n) return string(n - 1, a);
//        }
//        if (maxCount == 1) return "";
//        int low = 0;
//        int high = n;
//        int len;
//        string realAns;
//        while (low < high) {
//            if (low == high - 1) {
//                len = low;
//                for (int i = 0; i + len < n; i++) {
//                    string temp1 = s.substr(i, len);
//                    string temp2 = s.substr(i + 1);
//                    if (temp2.size() >= temp1.size() && temp2.find(temp1) != string::npos) return temp1;
//                }
//                break;
//            }
//            len = (high - low) / 2 + low;
//            bool canNotLonger = 1;
//            for (int i = 0; i + len < n; i++) {
//                string temp1 = s.substr(i, len);
//                string temp2 = s.substr(i + 1);
//                if (temp2.size() >= temp1.size() && temp2.find(temp1) != string::npos) {
//                    ans[len][temp1].push_back(i);
//                    realAns = temp1;
//                    canNotLonger = 0;
//                }
//            }
//            if (canNotLonger) high = len;
//            else break;
//        }
//        while (ans[len].size() != 0) {
//            for (unordered_map<string, vector<int>>::iterator it = ans[len].begin();
//                it != ans[len].end();
//                it++) {
//                for (int pos : it->second) {
//                    string a = s.substr(pos, len + 1);
//                    string b = s.substr(pos + 1);
//                    if (b.size() >= a.size() && b.find(a) != string::npos) {
//                        ans[len + 1][a] = it->second;
//                        realAns = a;
//                    }
//                }
//            }
//            len++;
//        }
//        return realAns;
//    }
//};
//
//int main()
//{
//    string a = "djpqwlrroqeuwwqgxnvdftzgsgnmpnhnhezixyhlydjjekpeczwtguowubfjsyohxaihmbjzfchmbnppouguvklmiaqkgomqzvvfubklwexbnzbdkvtxjnpzmfdgomvvsekluemjqaatkbhklusgxbezjghoddwcmirwrnnsgzjzwrnfyqgjylzgwhwipinohhzkywikevsqurnirnmmkgwpgvdswttwpingslbzxzsodqvlluqetfzfzbdhilaugrxewhomtwzjyldxzwtxmufbcrxtqfpcqscbbstplqczhumhedcmmgfkhdyetexcyrlvdrkgxzsncrpoomtqwnwozbteedjozikggwkbexbibruqdpekpjpzzymxpvtsderhjwxvyfahximykcndxskcjwewnfcbvymijwkrisjtzyiegysxpyfdrblxjquytzgvajmdvylemhqcctivjzmkdojbpvucgswycfnjkyoqvzlufphsrvhcbkxamqmaoveycykirpboguhrimemgkkbdmkyvalkpmktlkhwtaafuphdksucgianjkyztzyrndfjhkemdlgnmbucmqqyvjmzqlmgerhvzdtbjsagisjsqnrzqlmimtxumlngktcptgpcevpybghuycisxbemgpwptokdqvzp";
//    string b = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
//    string c = "azcwwgvepsrlxkuwiiuzlnjpbcwncsjxhzfcknbrryynezfxzvbdlqafhrfyfsmdubggrcisbchqgncbzmphlmfyzzroxyahqfwhjhbndamqnkylvrtgxtvljvzncrydtfpkhtqqzwbcfsvyefvbncbtbudaf";
//    string d = "ufqxqbibqwfvftkgyswzltymfmpmilzqvoitmzooswowewlrdtaqpmrpcpryraencsovmfbcwzplfbcfweqqlmwenakssxpmovaxyssrlvepindrdqdikneepprikhwdxueabuvtaqmjkveiopkbvicylaqazzcbslhfndjjfhifmbgklgqevsdkopkypwezrozwqhslodteghipnwnhpzriefixkmravzavwftuclfztdklufjgcesdirhtstcsuedfibajtfvucxharuadxiymexsridmbnqnofhhxvbarzchhpmigtgrnrpljjqzgqabkjecufgnqzhnseghnrztzyspicvifwepxopmhafqjmzpacxqhlnylewrpmnxacpdeyzubffddabepgblroztnuuodjzclylimuepcfmrltiucblaxhnovxdbuwmiwzvjjlqdskhinwkyvqjordhldlxdxtmmtebqghiaosrualzjnhkmmvwunbedlxqvpntqdrltujbdegwymhrjrxvqlrjhhtzrvbvdzqfpaickzsblaupzlaytnfxpwmwwwdwptuiovwqjllbqpjopklffxaafkgnbyhsjgkctgupdgmqxaskwwmcsduirmxmtlaeqygcwsjwsebdmxbdwueppvkgprvbukrmjoayngivbmqsomywfrqzlfcpuilquoazewapluuxdtifurtamveimqzsnmciqwegsgxjsopnjqkbrcalkmvwpziztcsdpqtuutudmceeqroiijdvqsjoffxmkkwlddpwovljnbeasxurbrlovujjydonfduampedpxbbgmemdufmaodczjiuqvvwhgnmqhiatznzdtxszkwildgpdpnrmhrybejtkadblaikrsskylfiqfljdzgtzgfcwvdzhqyxswwiawpsnirdmktrcaqlxuzusxpvgziswyhplhbdkrfgoelvbzeupvkqnezhbniztzpjrjoinytlhweiczoccyqhcievvjvpcbouxphpnookvkagcsdkoxqmeoiqndoczevgupfwfyxjjcidtcipthwtixbhoaphwluqfrnrrluqkqjafzzykpgaagdkjzglvfzjwyhjenkbuemnzbzqscosrtakkhqupdriporwbzyjqsgwqlkhlnytnetufmjxonwzhyugkxpibgtslrqdhwsasgftfxjahlfdonpzlrczcqrtmdddjtaemcescwgthsbqjhjdtfkduzftqgowrzsgxerqglfsqfjtmbsbtawidysvxorrpiaqjlodepswfvqozggdvgutxxptbrinivvllgpdqsujhcrhilklcutazgcgkcmyziuowhecarogbttmgwiwfcezyxchsarmrvsvbbjslulzsscgqtyciymcziuezyxccxdxccceovjzxxsznkqhtwdnqfznfeaxqojhfocjsjlrurviznfrzdqzgwlrlcfhtwsbajlqzxlczvisbzkhzgikitwhwtqainksbuspmpllqiosrkogvjatipkhfawzplgdwtnmcpwuilmxctzuurajpbicjpkrusnjnnkctisinfzngegycyxyrgrdtofxlwambumifvucgisarrpdfbxcxifomaayhjboadnrxlrilpysateldtztpwqmvamhfdqfkmitfkszzoopgmqgvwxnfdawbvdpuhdfgjljsglcypeogosigwfrfsshhtceicesiyylqiiyfwysqarotyyjmfhkkszwkyowrhdfjjrpkjfpejzthltiwjyphlnugeexrzzaowbmarghgyeibsngsfnieyblxdttjpkewzcgorbqimnegsryuwcexdogzzbcjbtzjbgbbkjsqfsiabgkudsivwygdgdblllbnojjykjvfrhhimddwrymmbqpydpcuknzwypfvpgcgltknivwqoquztwlndbxdnbxueshpccsgabrpmeismzxkhsptdjxeihffnerwcdmjyojxuslqexjeodhdpoknxkbmpedazdavysuyezianqasqsksbopswimlahqkmkkqeddryxtkxodthdzoknmgxmiyndqthvjrkoexizgweoszzkaioxsvrvwkkrsabkckqqwucfpltcgbqabgjvlohwzcrlukljaiilsgkdbrqrkivswwinnxywigstuxdhunzsgqkttpfutiakwzjvewwnzezefjeiliiibabiycaromarkpbcikpsfixuatozvoywrhzdxljasookdthgeykpcboqtqbchlbmynnxjwvozirsggzqvidgodalyxlhtpbwkhjxjycegwqoqhtepssiawgvfasfagrrbndacpfkmufdbfypueaayoobhilwrjvwrbehrywvzqyharzqwngebwjutyxspucxlxkmrmmskvphhlbkqsmadsnegwxacwyswnhfudjzyvwxmkgjkmlrtmwfuvjuuawskdgobnmiflcosmuqwultnwygyatolxsabevqwbqctyaxrgekedhwcvgdsqnjfojbsybomzhvolxaxmiismfqyixplwsmtffnbgffqfzqjctwcuhntlanlvwfpirksazqxrtwbegxbxcrcojjrcolkrybbixmjcsryafankovuzrtbbhbogcogwaqvwixvkrhljxyibfztswnlhtqxqhxnraugjdntcqnzyedvpxgtawanhgehqtjaiijwqglnsxluwsejbaairiblrknrhgqxmwhcotmdjjbxbarjtvtdsvgszgquuhiuacpzcdwxcjdfxvlcxgybansnbjuozyxkcujkxlcvfbzieooukvlvjyaraltoaxipaancsfvnjwidgzhyrzjxiwwfnrgkroqmoebdutclubezqvhhgrlxensimskcdqtsmgkblrheskimsqchgxswdhdjsrlnwuyzeoasfkrjbrnjojieejxruubuputminmyxaaquxwueutshyftraiznefjdlfnwehzsfuehzzfoxzuzgahgxipduyqngfnoqsaukmnpeinganqppgpizhyvudueunledkehggitcohjtagxhveddmhswqmhntjytapxbtllsaggbyaeecmjrckxvfwsdylblqdgzxrbgqpbgoruzugkqsnyqzeuxssqmlfrtfucwwqvjvxzgiepylfaldsdopkqkpesoolquooosnuyyzpawaqdennhmfxnuzatibnkdbkpqxmylogndhboqipfubxsmlnuiuhkdzwgjharkgmpkvrchkeltzdcdolwgcyzpozippftitgblreffmerstpskgffdtzyxfatolvhpufacugubsuakkhoeqgdiyyxvqddmgjywsqfnilbllqkpcjdluttydlswshrugzrahathnbngymvamwvhtajsfveqnxprvdwqdbhrnnqevzlndnwncofmtjkgxshqqntjcfhpbzxmhiebkreawllddumhjebpworxtvnwvkfvtvbvkilddvdaqvoesdfwuxqbdgttylkvjacjbufrcxexaopyddybfziickkfcfkuditudmaskgpwfbmaxevglqlpsznojbthnppikdexcfphfmhrzfemehvqtckmuqhuewljelhtqzptvquxfgsykdksuydqaoxhzgjxixobhfsehcbnrjzvgdwlryivwdstbiaajggszntwdoymwkiyemfjfdwaqgnqwwyllxubbhglwsstfeftngzqlnlqhxewxoireeqyllvbhgykqwpmfghjijwrtchabrsztgjzbpqwqobvssduzgfjrjdlshimopirlgarmmatznwawjynxujdryjmtlppftvnwxgajpovveeqxzlalaaxcgqoytcmplrgtbljuysybcjgiugmkszqgcrywpunzjcqxhbusuajowpxoeyincuwlsahvbzfcaxjiuxsgcpiolaanbewniihbigxruobajdhaqoqmzdsacyzjheyaagkabbawlffsmsnauyjzmmolsxqzacbatdirofgwlqhgwxnlrxmyzywwthextmfdkdfxiqcunamcnpfftsicxcsmhxphtustiewomntzzulkpjectzkgidvhiubqsgyereshkxbwfedmpwejixujbasmepnsjcrzmqztczpxpbtmwigdbsvfswxazxvxsrgicosfwtlbbuyxshymodhpdejdyojbldupcxtahuyabkpzpmyumooxtggazdkhjoyskzikrrxefoueqturcafszcsttemnkscafbalkoivwjowjrbkddvpdruhskghefrghnrcqutciajfplkvecppwpacobsfrluevebccyivelnruenavisglsiticlpzavruhnzlritvrktevphifrqqqdvkzynkzscxrjqjplptrjatzheypewhjhxqxvhszlvwxxsobbyypozcpqmlgqzhavmpcmxodbdxgytbybjvkblfyspvhxmejowdjrwzfviqsvvudsdwtqvtdxajlhfasbghfnfzkhfhkffpsctzwpiyrhhpvxnuyyllkzxytfbtehdycdigfbwpdmucjucabowgwehkrlbtknrorcnfkgsfzvgqtytcrsepykuowthayulbcikkuclovnhhlqxdzbaktsziaixgfxhqgpycmlekhbkofntjhxylqdtykmfmhikfwogyiwmjdejitzvxhdhzfpwpuozwtbezygdxsqeappvwaougxogcvstkynjahtmjswuobfrkpjtrhpukhtiouuuxzpqxhmcsoaogoxcvqtitgbwcicefygokjgoeqyhewahnhosmxkxznsgzgvmzzhhgsgvnyqhyvtnmflgyuymqaabteloxpdzmyytwkfgnhsehawtocttosvvbkyiqupeqdcyzeuofxjkjtwhhtcnkbnqyeelqkkpaxrowaefpnaqeowbwinqpjijmvrkqdjgetwlqxcsxxqrzjcojukpvwnufkhlhipjwltcdwjfvdhdqfqucopqigggubqroeozwxzasrgvkvwjyzzrqdqqewnpirjlihkfnykjftispjvexkkiauijpfuawqekfnrigaasnyqyvwqoljfbfogitpyboojxcmmobuaemcrbxihumhsyvzdcrtlczytwfpyibcdicftefrwqyggloodqoymorlshskenzfvufacmomnscyspazrntnilixxnkfbrayrxbczfcywxkndnrvxavyrbfxmgjoibzndnyjlgjisyxdlcanjmlhahicxznhlcmamydmvbcxatuvgfiamqxoxshrnnhbspnbbljzuxyjslvdjocycekromsvcowbdquscmbvtpbhqectujmdvjnucdcxrwhalhclfhljqknjcaihuybdcwtempgeekhykmorfgopzootvprenqacxgkovsnanvtnbabhenqzrrkjlobnzkiabgqcpiyxfqhzuxteqfmeaalssfxuktnpaoohmcxsdjyoukyfdlelqrymginyvtzpfwhwzphbowpsyupyglvwxbhqocnfircfarycsxrxdfzpzaxmexthfknkptxafmjiwpeecughwgmbyemkusvxkwxyxdgxufcdurqoeswamvododfuwkcdgccfvackexifecomnobgfdoalkrpckhigobcralegsunbrobijtposrecubalvkrkoklbqsmvsveeazqgtiqrvqwulporfoivxwysqcwzbadycjravngdabaetlhncsmlbtobcaentmlpvtjfvkntvufumbigxacnerqogdnrurleqbiwmvpuvgzmuhxjkprdaujckrsicowesqvtegglhcgymcttqdxwzxhrmgcirlacwkzyvoynfhbbhabtyfcqfdkwjpcndcybojkazhmyjbnlsljcasqtphtogpfvmosoonpbakounqukawaqsranduqjmawmqynvzxmqxgcmztapbzhlggyjfmftrgtmxrrfvnuxvcjvfttiyduxraeysmcpqfuyjsiwunnklvxynvqmanllaiiftgcfftxlaxrtukczjvosnaejwkdwatolzvmxydheypeemjhegmbsupfpmeoketnrnpttbkgwoxffmltoliqzvkhxskszdkkftfrvhmjffacvafvhdqzsexeipfykexeqcrjzxtejghpemcoqlliheyjjdgtwcvhhstcfnqahvovtdbkjmgruciorzhywiyqhigmicyggtmbbptwwkrpwvoxwqladcqfdlhymmydmjvgdqcxutsxsfdasodibreowoiyjiifmdiggpdmkqterzppaejjeazbffspmajqxmxbdtttubakavciohbduspcxdybhzzepcknimtriabrlebbvsyleyfksyanaqsykbvotdfzunyfumobfgynstrazobcjntjcntddcogdsyjqgpctukhnrawscbwrpecmainibqtkxesyvrcrpiysrtiqkdxehjbovsfoldcrfctoamgcltdmphwtwpqvmkkzypwotkhzcplzxstnsdvugarkuvxbuedhrxipcmwyrixetuizofwjfosdhzsfovvxpcdkhdpnfiyjopufnopqfstnouygpvzhouiintykfxktqvdkjcfyvpuqzkxaxegokbmlfvedsrkpdjuxzfikddqhzulwjlfglkwopxlquhvebotiluycienyxoryigligxzpnopbnzcfzfvcglgsonzrbnswcxasenxpqsgftqfifmbvzswcemjlbpwitoymhmtfmakoxwvtnloxhqlfpjcevtzyytaneciwdbtbtbqtptjqgmobpfhptszliilqzvlslfshebjgqkqalulakiwckzppnsgyuelwreeminkzlpuiefnapcpeahrnnffbnlwecsyzaeotfzmxebchhzhwkqskcbqzpsgdtokelhjcxmbupiqxoetglyqjgcfofrdngylvepxsuejhpwmjiutliwnjxwfedrkduuaqdjwfdncpbiawgbkdnvhallcvcceczfebxtxmphjcsbocrblsnccnjbnvatrlpwpnxpljmfcpyachoecuvekukkebkgutjyezurbepqtapjjhnemrroqjdkbwpkczeudtlbenjtejzllvtigadnofeuhxbhimzlgwfrikvqewlqfplpujrqmvqkrqeaqtolkqkuqnqnuajpepwwfeqmxafudrfpeuunjkihaktusxrjdgjjxnljfftlwlctuiaqczbajgtxhkivndcqdribfpashgwdroidakdnkxihixdbxvqembezziforyirvkbxrxgxtuxzqjprckchsfjqppyjnxdkhocfjsjlvblyjxgaikgdegkdeggzuxhwczxeimazlccgbahytxcsmzuspttppqurdypdfgoonqyglkbarufodmpwhrlgztxphioqnozkrciqcnobfpzqqxpzbxlbdgzxcijdajcuiuczeocpqpjmrkevpvcvrdcfsgsebwrhwkcywirvnrxuqxnklryahzmfqnrdzvviwgqytshnracighagkoqjyunefgtyopqdpjzenzjtiqxhcvolsqvzywibtxeuevokmohtgnhvltxzbdplqdqdpwpbgdshbkztbhzspecarjmgdmsppumegsnimjmxjgmztigixzcjpnjfbbfalvqauhiogvkxpmiafblrckhlypijcnldmrgsurlxpjhmeffwdujqcgpyggwrlmpktilmzydvlywwldsdjximqxjthlyqmhbbzqggdddkcputuxrqrgmkfapdxbfwpnavakvugacqrtpebxyyjuuuufodwwufoyozcrcwzielgeoirphcszvadgohvrzghpapxbfsqgsoheafirlyrjhddrsyhklddnnodtvhvdtgijjrglbfifugozbhfwspjgrddeippgnyvnhrecvbtlyjndmzqbzfwwlvbvscilxeuhtrebuwgindyccozulvdnvfcayokhsxlljnqsaqhyvruupuchlkphldowewmjhkcdwfnqdclzwkxacwmfhdyothbpzhloysrnaflpvrfmmmyoiipagtqtaiprubzwyycfjjmgvrxejneannioxncdoczgmgseubfijukimhjiqzcmxqkrsawknvyllhqzjqhgbudfbybgglutgdixodjzfwgnzyjdqiqqzipecniakeqfnslaavquahimgqlelhthyxnbpmepkwcjrnjnikrwqmwvjagaeohbcqczoudwobuyxppehfombqlzvruumpoxsfabbvwfsxecfwuqufzgrevupzvawvzhckcitudbndsocgxuqbvppcwtjibgeomepridbzwlvytsgcabvawegqtpxrljwuhfzfnzthoemqundeozigatypoushyjbkiuugqdgcvcivtqgxtmepeftdt";
//    Solution s;
//    cout<<s.longestDupSubstring(d);
//}