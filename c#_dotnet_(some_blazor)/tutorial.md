https://learn.microsoft.com/en-us/aspnet/core/blazor/tutorials/movie-database-app/part-1?view=aspnetcore-9.0&pivots=vs

## program.cs
A WebApplicationBuilder creates the app with preconfigured defaults:

var builder = WebApplication.CreateBuilder(args);

### Razor component services are added to the app by calling AddRazorComponents, which enables Razor components to render and execute code on the server, and AddInteractiveServerComponents adds services to support rendering Interactive Server components:

builder.Services.AddRazorComponents()
    .AddInteractiveServerComponents();


var app = builder.Build();

Next, the HTTP request pipeline is configured.

In the development environment:

### Exception Handler Middleware (UseExceptionHandler) processes errors and displays a developer exception page during development app runs.
HTTP Strict Transport Security Protocol (HSTS) Middleware (UseHsts) processes HSTS.

if (!app.Environment.IsDevelopment())
{
    app.UseExceptionHandler("/Error", createScopeForErrors: true);
    app.UseHsts();
}

### HTTPS Redirection Middleware (UseHttpsRedirection) enforces the HTTPS protocol by redirecting HTTP requests to HTTPS if an HTTPS port is available:

app.UseHttpsRedirection();

Map Static Assets routing endpoint conventions (MapStaticAssets) maps static files, such as images, scripts, and stylesheets, produced during the build as endpoints:

### app.MapStaticAssets();

MapRazorComponents maps components defined in the root App component to the given .NET assembly and renders routable components, and AddInteractiveServerRenderMode configures interactive server-side rendering (interactive SSR) support for the app:

app.MapRazorComponents<App>()
    .AddInteractiveServerRenderMode();

### The app is run by calling Run on the WebApplication (app):

app.Run();

### Troubleshoot with the completed sample
https://github.com/dotnet/blazor-samples

### HTTPS 
https://learn.microsoft.com/en-us/aspnet/core/security/enforcing-ssl?view=aspnetcore-9.0&tabs=visual-studio%2Clinux-sles


## model scaffold

Entity Framework Core (EF Core) services and tooling create a database context and database. EF Core is an object-relational mapper (O/RM) that simplifies data access