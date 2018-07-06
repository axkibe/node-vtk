/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkStreamerBaseWrap.h"
#include "vtkPolyDataStreamerWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPolyDataStreamerWrap::ptpl;

VtkPolyDataStreamerWrap::VtkPolyDataStreamerWrap()
{ }

VtkPolyDataStreamerWrap::VtkPolyDataStreamerWrap(vtkSmartPointer<vtkPolyDataStreamer> _native)
{ native = _native; }

VtkPolyDataStreamerWrap::~VtkPolyDataStreamerWrap()
{ }

void VtkPolyDataStreamerWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPolyDataStreamer").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("PolyDataStreamer").ToLocalChecked(), ConstructorGetter);
}

void VtkPolyDataStreamerWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPolyDataStreamerWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStreamerBaseWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStreamerBaseWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPolyDataStreamerWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ColorByPieceOff", ColorByPieceOff);
	Nan::SetPrototypeMethod(tpl, "colorByPieceOff", ColorByPieceOff);

	Nan::SetPrototypeMethod(tpl, "ColorByPieceOn", ColorByPieceOn);
	Nan::SetPrototypeMethod(tpl, "colorByPieceOn", ColorByPieceOn);

	Nan::SetPrototypeMethod(tpl, "GetColorByPiece", GetColorByPiece);
	Nan::SetPrototypeMethod(tpl, "getColorByPiece", GetColorByPiece);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfStreamDivisions", GetNumberOfStreamDivisions);
	Nan::SetPrototypeMethod(tpl, "getNumberOfStreamDivisions", GetNumberOfStreamDivisions);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetColorByPiece", SetColorByPiece);
	Nan::SetPrototypeMethod(tpl, "setColorByPiece", SetColorByPiece);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfStreamDivisions", SetNumberOfStreamDivisions);
	Nan::SetPrototypeMethod(tpl, "setNumberOfStreamDivisions", SetNumberOfStreamDivisions);

#ifdef VTK_NODE_PLUS_VTKPOLYDATASTREAMERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOLYDATASTREAMERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPolyDataStreamerWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPolyDataStreamer> native = vtkSmartPointer<vtkPolyDataStreamer>::New();
		VtkPolyDataStreamerWrap* obj = new VtkPolyDataStreamerWrap(native);
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

void VtkPolyDataStreamerWrap::ColorByPieceOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataStreamerWrap>(info.Holder());
	vtkPolyDataStreamer *native = (vtkPolyDataStreamer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorByPieceOff();
}

void VtkPolyDataStreamerWrap::ColorByPieceOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataStreamerWrap>(info.Holder());
	vtkPolyDataStreamer *native = (vtkPolyDataStreamer *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ColorByPieceOn();
}

void VtkPolyDataStreamerWrap::GetColorByPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataStreamerWrap>(info.Holder());
	vtkPolyDataStreamer *native = (vtkPolyDataStreamer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColorByPiece();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataStreamerWrap::GetNumberOfStreamDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataStreamerWrap>(info.Holder());
	vtkPolyDataStreamer *native = (vtkPolyDataStreamer *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfStreamDivisions();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPolyDataStreamerWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataStreamerWrap>(info.Holder());
	vtkPolyDataStreamer *native = (vtkPolyDataStreamer *)wrapper->native.GetPointer();
	vtkPolyDataStreamer * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPolyDataStreamerWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPolyDataStreamerWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPolyDataStreamerWrap *w = new VtkPolyDataStreamerWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPolyDataStreamerWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataStreamerWrap>(info.Holder());
	vtkPolyDataStreamer *native = (vtkPolyDataStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkPolyDataStreamer * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkPolyDataStreamerWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPolyDataStreamerWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPolyDataStreamerWrap *w = new VtkPolyDataStreamerWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataStreamerWrap::SetColorByPiece(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataStreamerWrap>(info.Holder());
	vtkPolyDataStreamer *native = (vtkPolyDataStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColorByPiece(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPolyDataStreamerWrap::SetNumberOfStreamDivisions(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPolyDataStreamerWrap *wrapper = ObjectWrap::Unwrap<VtkPolyDataStreamerWrap>(info.Holder());
	vtkPolyDataStreamer *native = (vtkPolyDataStreamer *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfStreamDivisions(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

