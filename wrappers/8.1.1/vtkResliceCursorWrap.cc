/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkResliceCursorWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkImageDataWrap.h"
#include "vtkPolyDataWrap.h"
#include "vtkPlaneWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkResliceCursorWrap::ptpl;

VtkResliceCursorWrap::VtkResliceCursorWrap()
{ }

VtkResliceCursorWrap::VtkResliceCursorWrap(vtkSmartPointer<vtkResliceCursor> _native)
{ native = _native; }

VtkResliceCursorWrap::~VtkResliceCursorWrap()
{ }

void VtkResliceCursorWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkResliceCursor").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ResliceCursor").ToLocalChecked(), ConstructorGetter);
}

void VtkResliceCursorWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkResliceCursorWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkResliceCursorWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCenter", GetCenter);
	Nan::SetPrototypeMethod(tpl, "getCenter", GetCenter);

	Nan::SetPrototypeMethod(tpl, "GetCenterlineAxisPolyData", GetCenterlineAxisPolyData);
	Nan::SetPrototypeMethod(tpl, "getCenterlineAxisPolyData", GetCenterlineAxisPolyData);

	Nan::SetPrototypeMethod(tpl, "GetHole", GetHole);
	Nan::SetPrototypeMethod(tpl, "getHole", GetHole);

	Nan::SetPrototypeMethod(tpl, "GetHoleWidth", GetHoleWidth);
	Nan::SetPrototypeMethod(tpl, "getHoleWidth", GetHoleWidth);

	Nan::SetPrototypeMethod(tpl, "GetHoleWidthInPixels", GetHoleWidthInPixels);
	Nan::SetPrototypeMethod(tpl, "getHoleWidthInPixels", GetHoleWidthInPixels);

	Nan::SetPrototypeMethod(tpl, "GetImage", GetImage);
	Nan::SetPrototypeMethod(tpl, "getImage", GetImage);

	Nan::SetPrototypeMethod(tpl, "GetPlane", GetPlane);
	Nan::SetPrototypeMethod(tpl, "getPlane", GetPlane);

	Nan::SetPrototypeMethod(tpl, "GetPolyData", GetPolyData);
	Nan::SetPrototypeMethod(tpl, "getPolyData", GetPolyData);

	Nan::SetPrototypeMethod(tpl, "GetThickMode", GetThickMode);
	Nan::SetPrototypeMethod(tpl, "getThickMode", GetThickMode);

	Nan::SetPrototypeMethod(tpl, "GetThickness", GetThickness);
	Nan::SetPrototypeMethod(tpl, "getThickness", GetThickness);

	Nan::SetPrototypeMethod(tpl, "GetXAxis", GetXAxis);
	Nan::SetPrototypeMethod(tpl, "getXAxis", GetXAxis);

	Nan::SetPrototypeMethod(tpl, "GetYAxis", GetYAxis);
	Nan::SetPrototypeMethod(tpl, "getYAxis", GetYAxis);

	Nan::SetPrototypeMethod(tpl, "GetZAxis", GetZAxis);
	Nan::SetPrototypeMethod(tpl, "getZAxis", GetZAxis);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetHole", SetHole);
	Nan::SetPrototypeMethod(tpl, "setHole", SetHole);

	Nan::SetPrototypeMethod(tpl, "SetHoleWidth", SetHoleWidth);
	Nan::SetPrototypeMethod(tpl, "setHoleWidth", SetHoleWidth);

	Nan::SetPrototypeMethod(tpl, "SetHoleWidthInPixels", SetHoleWidthInPixels);
	Nan::SetPrototypeMethod(tpl, "setHoleWidthInPixels", SetHoleWidthInPixels);

	Nan::SetPrototypeMethod(tpl, "SetImage", SetImage);
	Nan::SetPrototypeMethod(tpl, "setImage", SetImage);

	Nan::SetPrototypeMethod(tpl, "SetThickMode", SetThickMode);
	Nan::SetPrototypeMethod(tpl, "setThickMode", SetThickMode);

	Nan::SetPrototypeMethod(tpl, "SetThickness", SetThickness);
	Nan::SetPrototypeMethod(tpl, "setThickness", SetThickness);

	Nan::SetPrototypeMethod(tpl, "SetXAxis", SetXAxis);
	Nan::SetPrototypeMethod(tpl, "setXAxis", SetXAxis);

	Nan::SetPrototypeMethod(tpl, "SetYAxis", SetYAxis);
	Nan::SetPrototypeMethod(tpl, "setYAxis", SetYAxis);

	Nan::SetPrototypeMethod(tpl, "SetZAxis", SetZAxis);
	Nan::SetPrototypeMethod(tpl, "setZAxis", SetZAxis);

	Nan::SetPrototypeMethod(tpl, "ThickModeOff", ThickModeOff);
	Nan::SetPrototypeMethod(tpl, "thickModeOff", ThickModeOff);

	Nan::SetPrototypeMethod(tpl, "ThickModeOn", ThickModeOn);
	Nan::SetPrototypeMethod(tpl, "thickModeOn", ThickModeOn);

	Nan::SetPrototypeMethod(tpl, "Update", Update);
	Nan::SetPrototypeMethod(tpl, "update", Update);

#ifdef VTK_NODE_PLUS_VTKRESLICECURSORWRAP_INITPTPL
	VTK_NODE_PLUS_VTKRESLICECURSORWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkResliceCursorWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkResliceCursor> native = vtkSmartPointer<vtkResliceCursor>::New();
		VtkResliceCursorWrap* obj = new VtkResliceCursorWrap(native);
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

void VtkResliceCursorWrap::GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCenter();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkResliceCursorWrap::GetCenterlineAxisPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetCenterlineAxisPolyData(
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
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::GetHole(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHole();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorWrap::GetHoleWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHoleWidth();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorWrap::GetHoleWidthInPixels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetHoleWidthInPixels();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorWrap::GetImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetImage();
	VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorWrap::GetPlane(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkPlane * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPlane(
			info[0]->Int32Value()
		);
		VtkPlaneWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPlaneWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPlaneWrap *w = new VtkPlaneWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::GetPolyData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	vtkPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolyData();
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

void VtkResliceCursorWrap::GetThickMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThickMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkResliceCursorWrap::GetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetThickness();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkResliceCursorWrap::GetXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXAxis();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkResliceCursorWrap::GetYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYAxis();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkResliceCursorWrap::GetZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZAxis();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkResliceCursorWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	vtkResliceCursor * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkResliceCursorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkResliceCursorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkResliceCursorWrap *w = new VtkResliceCursorWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkResliceCursorWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkResliceCursorWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkResliceCursor * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkResliceCursorWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkResliceCursorWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkResliceCursorWrap *w = new VtkResliceCursorWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCenter(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetCenter(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetCenter(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::SetHole(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHole(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::SetHoleWidth(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHoleWidth(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::SetHoleWidthInPixels(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetHoleWidthInPixels(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::SetImage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkImageDataWrap::ptpl))->HasInstance(info[0]))
	{
		VtkImageDataWrap *a0 = ObjectWrap::Unwrap<VtkImageDataWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetImage(
			(vtkImageData *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::SetThickMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThickMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::SetThickness(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThickness(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetThickness(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetThickness(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::SetXAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXAxis(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXAxis(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetXAxis(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::SetYAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYAxis(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYAxis(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetYAxis(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::SetZAxis(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZAxis(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZAxis(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetZAxis(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkResliceCursorWrap::ThickModeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ThickModeOff();
}

void VtkResliceCursorWrap::ThickModeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ThickModeOn();
}

void VtkResliceCursorWrap::Update(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkResliceCursorWrap *wrapper = ObjectWrap::Unwrap<VtkResliceCursorWrap>(info.Holder());
	vtkResliceCursor *native = (vtkResliceCursor *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Update();
}

