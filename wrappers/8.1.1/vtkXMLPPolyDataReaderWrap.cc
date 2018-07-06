/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkXMLPUnstructuredDataReaderWrap.h"
#include "vtkXMLPPolyDataReaderWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkPolyDataWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLPPolyDataReaderWrap::ptpl;

VtkXMLPPolyDataReaderWrap::VtkXMLPPolyDataReaderWrap()
{ }

VtkXMLPPolyDataReaderWrap::VtkXMLPPolyDataReaderWrap(vtkSmartPointer<vtkXMLPPolyDataReader> _native)
{ native = _native; }

VtkXMLPPolyDataReaderWrap::~VtkXMLPPolyDataReaderWrap()
{ }

void VtkXMLPPolyDataReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLPPolyDataReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLPPolyDataReader").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLPPolyDataReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLPPolyDataReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLPUnstructuredDataReaderWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLPUnstructuredDataReaderWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLPPolyDataReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKXMLPPOLYDATAREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKXMLPPOLYDATAREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkXMLPPolyDataReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLPPolyDataReader> native = vtkSmartPointer<vtkXMLPPolyDataReader>::New();
		VtkXMLPPolyDataReaderWrap* obj = new VtkXMLPPolyDataReaderWrap(native);
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

void VtkXMLPPolyDataReaderWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPPolyDataReaderWrap>(info.Holder());
	vtkXMLPPolyDataReader *native = (vtkXMLPPolyDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOutput(
			info[0]->Int32Value()
		);
		VtkPolyDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataWrap *w = new VtkPolyDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	VtkPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataWrap *w = new VtkPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLPPolyDataReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPPolyDataReaderWrap>(info.Holder());
	vtkXMLPPolyDataReader *native = (vtkXMLPPolyDataReader *)wrapper->native.GetPointer();
	vtkXMLPPolyDataReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkXMLPPolyDataReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLPPolyDataReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLPPolyDataReaderWrap *w = new VtkXMLPPolyDataReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLPPolyDataReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLPPolyDataReaderWrap *wrapper = ObjectWrap::Unwrap<VtkXMLPPolyDataReaderWrap>(info.Holder());
	vtkXMLPPolyDataReader *native = (vtkXMLPPolyDataReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkXMLPPolyDataReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkXMLPPolyDataReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLPPolyDataReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLPPolyDataReaderWrap *w = new VtkXMLPPolyDataReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

