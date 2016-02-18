/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkXMLPUnstructuredDataWriterWrap.h"
#include "vtkXMLPUnstructuredGridWriterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkUnstructuredGridBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLPUnstructuredGridWriterWrap::ptpl;

VtkXMLPUnstructuredGridWriterWrap::VtkXMLPUnstructuredGridWriterWrap()
{ }

VtkXMLPUnstructuredGridWriterWrap::VtkXMLPUnstructuredGridWriterWrap(vtkSmartPointer<vtkXMLPUnstructuredGridWriter> _native)
{ native = _native; }

VtkXMLPUnstructuredGridWriterWrap::~VtkXMLPUnstructuredGridWriterWrap()
{ }

void VtkXMLPUnstructuredGridWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLPUnstructuredGridWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLPUnstructuredGridWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLPUnstructuredGridWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLPUnstructuredGridWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLPUnstructuredDataWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLPUnstructuredDataWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLPUnstructuredGridWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDefaultFileExtension", GetDefaultFileExtension);
	Nan::SetPrototypeMethod(tpl, "getDefaultFileExtension", GetDefaultFileExtension);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKXMLPUNSTRUCTUREDGRIDWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKXMLPUNSTRUCTUREDGRIDWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkXMLPUnstructuredGridWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLPUnstructuredGridWriter> native = vtkSmartPointer<vtkXMLPUnstructuredGridWriter>::New();
		VtkXMLPUnstructuredGridWriterWrap* obj = new VtkXMLPUnstructuredGridWriterWrap(native);
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

void VtkXMLPUnstructuredGridWriterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUnstructuredGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUnstructuredGridWriterWrap>(info.Holder());
	vtkXMLPUnstructuredGridWriter *native = (vtkXMLPUnstructuredGridWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLPUnstructuredGridWriterWrap::GetDefaultFileExtension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUnstructuredGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUnstructuredGridWriterWrap>(info.Holder());
	vtkXMLPUnstructuredGridWriter *native = (vtkXMLPUnstructuredGridWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultFileExtension();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLPUnstructuredGridWriterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUnstructuredGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUnstructuredGridWriterWrap>(info.Holder());
	vtkXMLPUnstructuredGridWriter *native = (vtkXMLPUnstructuredGridWriter *)wrapper->native.GetPointer();
	vtkUnstructuredGridBase * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	VtkUnstructuredGridBaseWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridBaseWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridBaseWrap *w = new VtkUnstructuredGridBaseWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLPUnstructuredGridWriterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUnstructuredGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUnstructuredGridWriterWrap>(info.Holder());
	vtkXMLPUnstructuredGridWriter *native = (vtkXMLPUnstructuredGridWriter *)wrapper->native.GetPointer();
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

void VtkXMLPUnstructuredGridWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUnstructuredGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUnstructuredGridWriterWrap>(info.Holder());
	vtkXMLPUnstructuredGridWriter *native = (vtkXMLPUnstructuredGridWriter *)wrapper->native.GetPointer();
	vtkXMLPUnstructuredGridWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkXMLPUnstructuredGridWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLPUnstructuredGridWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLPUnstructuredGridWriterWrap *w = new VtkXMLPUnstructuredGridWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLPUnstructuredGridWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPUnstructuredGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPUnstructuredGridWriterWrap>(info.Holder());
	vtkXMLPUnstructuredGridWriter *native = (vtkXMLPUnstructuredGridWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkXMLPUnstructuredGridWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkXMLPUnstructuredGridWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLPUnstructuredGridWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLPUnstructuredGridWriterWrap *w = new VtkXMLPUnstructuredGridWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

