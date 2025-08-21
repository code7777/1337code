##### sHARPE RATIO

Mean of returns devided by deviation of returns  ( daily, annual etc)

### Intro

www.systematictrading.org





####  Asset allocating investor

An asset allocating investor allocates funds amongst, and within, different asset
 classes. Asset allocators can use systematic methods to avoid the short-term chasing
 of fads and fashions that they know will reduce their returns. They might be lazy and
 wise amateur investors, or managing institutional portfolios with long horizons such as
 pension funds

Collective Funds ETFS

#### Semi- Automatic Trader 

 Semi-automatic traders live in a world of opportunistic bets2
 taken on a fluid set of
 assets. Semi-automatic traders think they are superior to simple rules when it comes to
 forecasting by how much prices will go up or down; instead they make their own
 educated guesses. However they would like to place those bets inside a systematic
 framework which will ensure their positions and risk are properly managed. This frees
 them up to spend more time making the right call on the market.
 In my example the semi-automatic trader is comfortable with leverage and investing
 with derivatives. They are both buyers and sellers, betting for or against asset prices.
 My semi-automatic trader is active in equity index and commodity spread bet markets,
 but the example is widely applicable elsewhere

#### Staunch systems trader 

 The staunch systems trader is a true believer in the benefits of fully systematic
 trading. Unlike the semi-automatic trader and the asset allocating investor, they
 embrace the use of systematic trading rules to forecast price changes, but within the
 same common framework for position risk management

Many systems traders think they can find trading rules that give them extra profits, or
 alpha. Others are unconvinced they have any special skill but believe there are
 additional returns available which can’t be captured just by ‘buy and hold’ investing.
 They can use very simple rules to capture these sources of alternative beta.

Like semi-automatic traders, staunch systems traders are comfortable with derivatives
 and leverage. Although the examples I give are for futures trading, they are equally
 valid for trading similar assets.


 #### More Info

  Passive indexing, buying shares or bonds in fixed weights, is effectively a form of
 systematic trading, albeit a very simple one. I’ll show how this concept can be
 extended and improved in the asset allocating investor example.

 The returns from hedge funds can be separated into beta – what you can get by
 tracking the market, alpha – the skill the hedge fund manager has, and alternative
 beta. An example of alternative beta is the additional return you can get from buying
 stocks with low price-to-earnings (PE) ratios, and selling those with high PE ratios 
the equity value premium.

 Alternative beta doesn’t need skill, but it can’t be earned just by buying and holding
 shares. However it can be produced by following relatively simple rules. Some
 collective funds have been created to allow investors to get access to alternative beta,
 but they are still relatively expensive. Institutions should seriously consider using
 systematic rule-based trading to create in-house cheap alternative beta portfolios. The
 staunch systems trader example shows how this can be achieved

 #### Calculations 
 pg 202
 pg 161

 ### Part one Theory

#### Chapter 1 FLAWED HUMAN BRAIN

 ##### PG 37 -38 
Volatility - standard deviation of returns. One unit of standard deviation is also sometimes called a sigma.

250 business days in 2025 (According to chat gpt) (In the book they use 256 but I feel like this is innacurate)

Just from a quick glance at Chat GPT i feel like the median number of biz days are 252 but this is just a quick glance. 

annual standard deviation  sqrt of num of biz days in year ... 

2015 Equities have an annualised standard deviation of about 20% a year. Bonds tend to
 be safer, depending on their maturity. A typical two year bond has an annualised
 sigma of around 1.5% a year, and a ten year bond would be more like 8%.

We often assume our returns have a particular type of distribution. A distribution
 is just a way of describing the pattern of your data. A common distribution I use is
 the Gaussian normal distribution. If returns are Gaussian normal, then the mean
 and standard deviation alone are sufficient to say how likely certain returns will be.

##### biz days for last 10 years (Chat GPT)

| Year | Business Days |   |
| ---- | ------------- | - |
| 2015 | 252           |   |
| 2016 | 252           |   |
| 2017 | 251           |   |
| 2018 | 251           |   |
| 2019 | 252           |   |
| 2020 | 253           |   |
| 2021 | 251           |   |
| 2022 | 256           |   |
| 2023 | 251           |   |
| 2024 | 262           |   |
| 2025 | 250           |   |

##### last 25 years (Chat GPT)

| Year | Business Days |   |
| ---- | ------------- | - |
| 2000 | 252           |   |
| 2001 | 251           |   |
| 2002 | 251           |   |
| 2003 | 252           |   |
| 2004 | 253           |   |
| 2005 | 252           |   |
| 2006 | 251           |   |
| 2007 | 251           |   |
| 2008 | 253           |   |
| 2009 | 252           |   |
| 2010 | 251           |   |
| 2011 | 252           |   |
| 2012 | 253           |   |
| 2013 | 252           |   |
| 2014 | 251           |   |
| 2015 | 252           |   |
| 2016 | 252           |   |
| 2017 | 251           |   |
| 2018 | 251           |   |
| 2019 | 252           |   |
| 2020 | 253           |   |
| 2021 | 251           |   |
| 2022 | 251           |   |
| 2023 | 251           |   |
| 2024 | 252           |   |
| 2025 | 250           |   |

 ##### Cognitive bias

 To stop meddling with trading systems ( overconfidence etc) use a commitment mechanism
 - loss limit , automation , etc 

 Trading systems must be objective  - computers can't automate subjective systems

 ##### Overfitting
 Narrative fallacy - our brains are great at seeing patterns where there are none
 Overfitting example - fitting a process by looking at back-test results

 Narrative fallacy means we have a tendency to see more
    predictability in historic asset prices than really existed and so we’re naturally drawn to
    over-fitted trading rules

##### Second bias overconfidence 

- lack of diversification

Surveys of individual portfolios find that most amateur
 investors have relatively few securities in their portfolio, with a bias towards their
 home country, and also lack diversification across asset classes

 Overtrading - Both amateur investors and professional managers have a tendency to trade too
 frequently.

 Over betting - too much leverage 

#### Chapter 2 Systematic trading rule

A trading rule is a systematic way of predicting price movements

Systematic trading assumes the future will be like the past ( 0.o )

2 ways ideas or data

- data first  
find some profitable patterns and create some trading rules to exploit them. This is sometimes called data mining.

-ideas first - hypothesis

 The degree of liquidity in an asset is how easily we can buy or sell without unduly
 affecting the price. 

 risk parity - equal risk

##### Pros and cons ideas first vs data first
PG 44

##### sHARPE RATIO

Mean of returns devided by deviation of returns  ( daily, annual etc)

##### SKEW
 
non symmetric distribution , - large up moves positive skew, large down moves neg skew

Equities norm have mildly neg skew. 
Safe haven assets like gold and swiss francs tend to have more positive skew
VIX has positive skew ? 

##### Law of Active management

 law of active management, first articulated by Richard Kahn in 1989, states
 that the Sharpe ratio
 of a trading strategy will be proportional to the square root
 of the number of independent bets made per year

##### Technical vs fundamental 
Purely technical rules only use price data. Non price,
 fundamental data, comes in two main flavours: micro and macro. Micro data is about
 60
a specific asset, for example the yield of a particular bond or the PE ratio of a
 company. Macro data such as inflation and GDP growth covers entire economies.

 ### Part Two Toolbox

##### 8/16 continueing reading  
lets get the bag!

#### chap 3 fitting
This entire chapter is about using data to create the trading rules used by
 staunch systematic traders. It is not necessary reading if you are going to use
 my framework to make discretionary forecasts as a semi-automatic trader or
 without any rules at all as an asset allocating investor

decision to run a systematic trading system means you have to select one or more
 trading rules and discard others as being unworthy. This process is often called
 fitting.

##### calibration - when u stick to a rule

##### sigma - units away from std dev
T-test sometimes used with sharpe ratio. Further away mean is from zero (measured in sigma) more likely SR is positive
 
 #### Chap 4 Portfolio allocation

 chap for staunch systems trader , not for semi-auto trader.

This chapter is about deciding how you share out your trading capital between
 different instruments or trading rules.

##### bootstraped 
This involves repeating my optimisation
 many times over different parts of the data, taking the resulting weights, and averaging
 them out. So the weights are the average of many optimisations, rather than one
 optimisation on the average of all data

 ##### handcrafting
  The procedure involves constructing the portfolio in a bottom-up fashion by first
 forming groups of similar assets. Within and across groups you set allocations using a
 table of optimal weights for similar portfolios. These weights come from my own
 experiments with bootstrapping

 ### Part 3 Framework

#### Chap 5 framework overview
 trading rules are the engine of the system

 trading framework are the chasis

 #### Chap 6 Instruments
 what you are going to trade - asset class

 understand what makes a market function - eg interest rates,
 economic moves, corporate profits etc.. esp for ideas first trading