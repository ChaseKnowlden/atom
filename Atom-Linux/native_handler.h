#ifndef CEF_TESTS_CEFCLIENT_NATIVE_HANDLER_H_
#define CEF_TESTS_CEFCLIENT_NATIVE_HANDLER_H_

#include "include/cef_base.h"
#include "include/cef_v8.h"
#include <string>

class NativeHandler: public CefV8Handler {
public:
	NativeHandler();

	CefRefPtr<CefV8Value> object;

	GtkWidget* window;

	std::string path;

	virtual bool Execute(const CefString& name, CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
			CefString& exception);

IMPLEMENT_REFCOUNTING(NativeHandler)
	;

private:
	void Exists(const CefString& name, CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
			CefString& exception);

	void Read(const CefString& name, CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
			CefString& exception);

	void Absolute(const CefString& name, CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
			CefString& exception);

	void List(const CefString& name, CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
			CefString& exception);

	void IsFile(const CefString& name, CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
			CefString& exception);

	void IsDirectory(const CefString& name, CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
			CefString& exception);

	void OpenDialog(const CefString& name, CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
			CefString& exception);

	void Open(const CefString& name, CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
			CefString& exception);

	void Write(const CefString& name, CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
			CefString& exception);

	void WriteToPasteboard(const CefString& name, CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
			CefString& exception);

	void ReadFromPasteboard(const CefString& name, CefRefPtr<CefV8Value> object,
			const CefV8ValueList& arguments, CefRefPtr<CefV8Value>& retval,
			CefString& exception);
};

#endif
