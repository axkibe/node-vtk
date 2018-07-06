/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkXMLStructuredDataWriterWrap.h"
#include "vtkXMLRectilinearGridWriterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkRectilinearGridWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLRectilinearGridWriterWrap::ptpl;

VtkXMLRectilinearGridWriterWrap::VtkXMLRectilinearGridWriterWrap()
{ }

VtkXMLRectilinearGridWriterWrap::VtkXMLRectilinearGridWriterWrap(vtkSmartPointer<vtkXMLRectilinearGridWriter> _native)
{ native = _native; }

VtkXMLRectilinearGridWriterWrap::~VtkXMLRectilinearGridWriterWrap()
{ }

void VtkXMLRectilinearGridWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLRectilinearGridWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLRectilinearGridWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLRectilinearGridWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLRectilinearGridWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLStructuredDataWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLStructuredDataWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLRectilinearGridWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetDefaultFileExtension", GetDefaultFileExtension);
	Nan::SetPrototypeMethod(tpl, "getDefaultFileExtension", GetDefaultFileExtension);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKXMLRECTILINEARGRIDWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKXMLRECTILINEARGRIDWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkXMLRectilinearGridWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLRectilinearGridWriter> native = vtkSmartPointer<vtkXMLRectilinearGridWriter>::New();
		VtkXMLRectilinearGridWriterWrap* obj = new VtkXMLRectilinearGridWriterWrap(native);
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

void VtkXMLRectilinearGridWriterWrap::GetDefaultFileExtension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLRectilinearGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLRectilinearGridWriterWrap>(info.Holder());
	vtkXMLRectilinearGridWriter *native = (vtkXMLRectilinearGridWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultFileExtension();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLRectilinearGridWriterWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLRectilinearGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLRectilinearGridWriterWrap>(info.Holder());
	vtkXMLRectilinearGridWriter *native = (vtkXMLRectilinearGridWriter *)wrapper->native.GetPointer();
	vtkRectilinearGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	VtkRectilinearGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkRectilinearGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkRectilinearGridWrap *w = new VtkRectilinearGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLRectilinearGridWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLRectilinearGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLRectilinearGridWriterWrap>(info.Holder());
	vtkXMLRectilinearGridWriter *native = (vtkXMLRectilinearGridWriter *)wrapper->native.GetPointer();
	vtkXMLRectilinearGridWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkXMLRectilinearGridWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLRectilinearGridWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLRectilinearGridWriterWrap *w = new VtkXMLRectilinearGridWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLRectilinearGridWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLRectilinearGridWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLRectilinearGridWriterWrap>(info.Holder());
	vtkXMLRectilinearGridWriter *native = (vtkXMLRectilinearGridWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkXMLRectilinearGridWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkXMLRectilinearGridWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLRectilinearGridWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLRectilinearGridWriterWrap *w = new VtkXMLRectilinearGridWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
