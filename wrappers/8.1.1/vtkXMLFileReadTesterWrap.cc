/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkXMLParserWrap.h"
#include "vtkXMLFileReadTesterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLFileReadTesterWrap::ptpl;

VtkXMLFileReadTesterWrap::VtkXMLFileReadTesterWrap()
{ }

VtkXMLFileReadTesterWrap::VtkXMLFileReadTesterWrap(vtkSmartPointer<vtkXMLFileReadTester> _native)
{ native = _native; }

VtkXMLFileReadTesterWrap::~VtkXMLFileReadTesterWrap()
{ }

void VtkXMLFileReadTesterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLFileReadTester").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLFileReadTester").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLFileReadTesterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLFileReadTesterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLParserWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLParserWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLFileReadTesterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetFileDataType", GetFileDataType);
	Nan::SetPrototypeMethod(tpl, "getFileDataType", GetFileDataType);

	Nan::SetPrototypeMethod(tpl, "GetFileVersion", GetFileVersion);
	Nan::SetPrototypeMethod(tpl, "getFileVersion", GetFileVersion);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "TestReadFile", TestReadFile);
	Nan::SetPrototypeMethod(tpl, "testReadFile", TestReadFile);

#ifdef VTK_NODE_PLUS_VTKXMLFILEREADTESTERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKXMLFILEREADTESTERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkXMLFileReadTesterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLFileReadTester> native = vtkSmartPointer<vtkXMLFileReadTester>::New();
		VtkXMLFileReadTesterWrap* obj = new VtkXMLFileReadTesterWrap(native);
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

void VtkXMLFileReadTesterWrap::GetFileDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLFileReadTesterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLFileReadTesterWrap>(info.Holder());
	vtkXMLFileReadTester *native = (vtkXMLFileReadTester *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileDataType();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLFileReadTesterWrap::GetFileVersion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLFileReadTesterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLFileReadTesterWrap>(info.Holder());
	vtkXMLFileReadTester *native = (vtkXMLFileReadTester *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFileVersion();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLFileReadTesterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLFileReadTesterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLFileReadTesterWrap>(info.Holder());
	vtkXMLFileReadTester *native = (vtkXMLFileReadTester *)wrapper->native.GetPointer();
	vtkXMLFileReadTester * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkXMLFileReadTesterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLFileReadTesterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLFileReadTesterWrap *w = new VtkXMLFileReadTesterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLFileReadTesterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLFileReadTesterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLFileReadTesterWrap>(info.Holder());
	vtkXMLFileReadTester *native = (vtkXMLFileReadTester *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkXMLFileReadTester * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkXMLFileReadTesterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLFileReadTesterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLFileReadTesterWrap *w = new VtkXMLFileReadTesterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkXMLFileReadTesterWrap::TestReadFile(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLFileReadTesterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLFileReadTesterWrap>(info.Holder());
	vtkXMLFileReadTester *native = (vtkXMLFileReadTester *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->TestReadFile();
	info.GetReturnValue().Set(Nan::New(r));
}

