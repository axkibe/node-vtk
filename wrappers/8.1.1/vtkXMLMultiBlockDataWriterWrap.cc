/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkXMLCompositeDataWriterWrap.h"
#include "vtkXMLMultiBlockDataWriterWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkXMLMultiBlockDataWriterWrap::ptpl;

VtkXMLMultiBlockDataWriterWrap::VtkXMLMultiBlockDataWriterWrap()
{ }

VtkXMLMultiBlockDataWriterWrap::VtkXMLMultiBlockDataWriterWrap(vtkSmartPointer<vtkXMLMultiBlockDataWriter> _native)
{ native = _native; }

VtkXMLMultiBlockDataWriterWrap::~VtkXMLMultiBlockDataWriterWrap()
{ }

void VtkXMLMultiBlockDataWriterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkXMLMultiBlockDataWriter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("XMLMultiBlockDataWriter").ToLocalChecked(), ConstructorGetter);
}

void VtkXMLMultiBlockDataWriterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkXMLMultiBlockDataWriterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkXMLCompositeDataWriterWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkXMLCompositeDataWriterWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkXMLMultiBlockDataWriterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetDefaultFileExtension", GetDefaultFileExtension);
	Nan::SetPrototypeMethod(tpl, "getDefaultFileExtension", GetDefaultFileExtension);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKXMLMULTIBLOCKDATAWRITERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKXMLMULTIBLOCKDATAWRITERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkXMLMultiBlockDataWriterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkXMLMultiBlockDataWriter> native = vtkSmartPointer<vtkXMLMultiBlockDataWriter>::New();
		VtkXMLMultiBlockDataWriterWrap* obj = new VtkXMLMultiBlockDataWriterWrap(native);
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

void VtkXMLMultiBlockDataWriterWrap::GetDefaultFileExtension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLMultiBlockDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLMultiBlockDataWriterWrap>(info.Holder());
	vtkXMLMultiBlockDataWriter *native = (vtkXMLMultiBlockDataWriter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDefaultFileExtension();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkXMLMultiBlockDataWriterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLMultiBlockDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLMultiBlockDataWriterWrap>(info.Holder());
	vtkXMLMultiBlockDataWriter *native = (vtkXMLMultiBlockDataWriter *)wrapper->native.GetPointer();
	vtkXMLMultiBlockDataWriter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkXMLMultiBlockDataWriterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkXMLMultiBlockDataWriterWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkXMLMultiBlockDataWriterWrap *w = new VtkXMLMultiBlockDataWriterWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkXMLMultiBlockDataWriterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkXMLMultiBlockDataWriterWrap *wrapper = ObjectWrap::Unwrap<VtkXMLMultiBlockDataWriterWrap>(info.Holder());
	vtkXMLMultiBlockDataWriter *native = (vtkXMLMultiBlockDataWriter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkXMLMultiBlockDataWriter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkXMLMultiBlockDataWriterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkXMLMultiBlockDataWriterWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkXMLMultiBlockDataWriterWrap *w = new VtkXMLMultiBlockDataWriterWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

