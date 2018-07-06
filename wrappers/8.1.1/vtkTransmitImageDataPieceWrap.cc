/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkTransmitStructuredDataPieceWrap.h"
#include "vtkTransmitImageDataPieceWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTransmitImageDataPieceWrap::ptpl;

VtkTransmitImageDataPieceWrap::VtkTransmitImageDataPieceWrap()
{ }

VtkTransmitImageDataPieceWrap::VtkTransmitImageDataPieceWrap(vtkSmartPointer<vtkTransmitImageDataPiece> _native)
{ native = _native; }

VtkTransmitImageDataPieceWrap::~VtkTransmitImageDataPieceWrap()
{ }

void VtkTransmitImageDataPieceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTransmitImageDataPiece").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TransmitImageDataPiece").ToLocalChecked(), ConstructorGetter);
}

void VtkTransmitImageDataPieceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTransmitImageDataPieceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTransmitStructuredDataPieceWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTransmitStructuredDataPieceWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTransmitImageDataPieceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

#ifdef VTK_NODE_PLUS_VTKTRANSMITIMAGEDATAPIECEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTRANSMITIMAGEDATAPIECEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTransmitImageDataPieceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTransmitImageDataPiece> native = vtkSmartPointer<vtkTransmitImageDataPiece>::New();
		VtkTransmitImageDataPieceWrap* obj = new VtkTransmitImageDataPieceWrap(native);
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

void VtkTransmitImageDataPieceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitImageDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitImageDataPieceWrap>(info.Holder());
	vtkTransmitImageDataPiece *native = (vtkTransmitImageDataPiece *)wrapper->native.GetPointer();
	vtkTransmitImageDataPiece * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTransmitImageDataPieceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransmitImageDataPieceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransmitImageDataPieceWrap *w = new VtkTransmitImageDataPieceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransmitImageDataPieceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransmitImageDataPieceWrap *wrapper = ObjectWrap::Unwrap<VtkTransmitImageDataPieceWrap>(info.Holder());
	vtkTransmitImageDataPiece *native = (vtkTransmitImageDataPiece *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkTransmitImageDataPiece * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkTransmitImageDataPieceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTransmitImageDataPieceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTransmitImageDataPieceWrap *w = new VtkTransmitImageDataPieceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

