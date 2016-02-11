/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkXMLParserWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLParserWrap::ptpl;

VtkXMLParserWrap::VtkXMLParserWrap()
{ }

VtkXMLParserWrap::VtkXMLParserWrap(vtkSmartPointer<vtkXMLParser> _native)
{ native = _native; }

VtkXMLParserWrap::~VtkXMLParserWrap()
{ }

void VtkXMLParserWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLParser").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLParser").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLParserWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLParserWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLParserWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CleanupParser", CleanupParser);
	Nan::SetPrototypeMethod(tpl, "cleanupParser", CleanupParser);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetEncoding", GetEncoding);
	Nan::SetPrototypeMethod(tpl, "getEncoding", GetEncoding);

	Nan::SetPrototypeMethod(tpl, "GetFileName", GetFileName);
	Nan::SetPrototypeMethod(tpl, "getFileName", GetFileName);

	Nan::SetPrototypeMethod(tpl, "GetIgnoreCharacterData", GetIgnoreCharacterData);
	Nan::SetPrototypeMethod(tpl, "getIgnoreCharacterData", GetIgnoreCharacterData);

	Nan::SetPrototypeMethod(tpl, "InitializeParser", InitializeParser);
	Nan::SetPrototypeMethod(tpl, "initializeParser", InitializeParser);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Parse", Parse);
	Nan::SetPrototypeMethod(tpl, "parse", Parse);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetEncoding", SetEncoding);
	Nan::SetPrototypeMethod(tpl, "setEncoding", SetEncoding);

	Nan::SetPrototypeMethod(tpl, "SetFileName", SetFileName);
	Nan::SetPrototypeMethod(tpl, "setFileName", SetFileName);

	Nan::SetPrototypeMethod(tpl, "SetIgnoreCharacterData", SetIgnoreCharacterData);
	Nan::SetPrototypeMethod(tpl, "setIgnoreCharacterData", SetIgnoreCharacterData);

	ptpl.Reset( tpl );
}

void VtkXMLParserWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLParser> native = vtkSmartPointer<vtkXMLParser>::New();
		VtkXMLParserWrap* obj = new VtkXMLParserWrap(native);
		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
		{
			Nan::ThrowError("Parameter Error");
			return;
		}
	}

	info.GetReturnValue().Set(info.This());
}

void VtkXMLParserWrap::CleanupParser(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->CleanupParser();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLParserWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLParserWrap::GetEncoding(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEncoding();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLParserWrap::GetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLParserWrap::GetIgnoreCharacterData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIgnoreCharacterData();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLParserWrap::InitializeParser(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->InitializeParser();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLParserWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLParserWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	vtkXMLParser * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkXMLParserWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLParserWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLParserWrap *w = new VtkXMLParserWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLParserWrap::Parse(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Parse(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->Parse();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkXMLParserWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLParser * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkXMLParserWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLParserWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLParserWrap *w = new VtkXMLParserWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLParserWrap::SetEncoding(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEncoding(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLParserWrap::SetFileName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFileName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLParserWrap::SetIgnoreCharacterData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLParserWrap *wrapper = ObjectWrap::Unwrap<VtkXMLParserWrap>(info.Holder());
	vtkXMLParser *native = (vtkXMLParser *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIgnoreCharacterData(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

