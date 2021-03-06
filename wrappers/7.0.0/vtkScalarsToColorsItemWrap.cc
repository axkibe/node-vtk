/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPlotWrap.h"
#include "vtkScalarsToColorsItemWrap.h"
#include "vtkObjectWrap.h"
#include "vtkContext2DWrap.h"
#include "vtkPenWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkScalarsToColorsItemWrap::ptpl;

VtkScalarsToColorsItemWrap::VtkScalarsToColorsItemWrap()
{ }

VtkScalarsToColorsItemWrap::VtkScalarsToColorsItemWrap(vtkSmartPointer<vtkScalarsToColorsItem> _native)
{ native = _native; }

VtkScalarsToColorsItemWrap::~VtkScalarsToColorsItemWrap()
{ }

void VtkScalarsToColorsItemWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkScalarsToColorsItem").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ScalarsToColorsItem").ToLocalChecked(), ConstructorGetter);
}

void VtkScalarsToColorsItemWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkScalarsToColorsItemWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPlotWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPlotWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkScalarsToColorsItemWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetMaskAboveCurve", GetMaskAboveCurve);
	Nan::SetPrototypeMethod(tpl, "getMaskAboveCurve", GetMaskAboveCurve);

	Nan::SetPrototypeMethod(tpl, "GetPolyLinePen", GetPolyLinePen);
	Nan::SetPrototypeMethod(tpl, "getPolyLinePen", GetPolyLinePen);

	Nan::SetPrototypeMethod(tpl, "GetUserBounds", GetUserBounds);
	Nan::SetPrototypeMethod(tpl, "getUserBounds", GetUserBounds);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Paint", Paint);
	Nan::SetPrototypeMethod(tpl, "paint", Paint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMaskAboveCurve", SetMaskAboveCurve);
	Nan::SetPrototypeMethod(tpl, "setMaskAboveCurve", SetMaskAboveCurve);

	Nan::SetPrototypeMethod(tpl, "SetUserBounds", SetUserBounds);
	Nan::SetPrototypeMethod(tpl, "setUserBounds", SetUserBounds);

#ifdef VTK_NODE_PLUS_VTKSCALARSTOCOLORSITEMWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSCALARSTOCOLORSITEMWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkScalarsToColorsItemWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		Nan::ThrowError("Cannot create instance of abstract class.");
		return;
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

void VtkScalarsToColorsItemWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsItemWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsItemWrap>(info.Holder());
	vtkScalarsToColorsItem *native = (vtkScalarsToColorsItem *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
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
		native->GetBounds(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsItemWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsItemWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsItemWrap>(info.Holder());
	vtkScalarsToColorsItem *native = (vtkScalarsToColorsItem *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkScalarsToColorsItemWrap::GetMaskAboveCurve(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsItemWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsItemWrap>(info.Holder());
	vtkScalarsToColorsItem *native = (vtkScalarsToColorsItem *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaskAboveCurve();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkScalarsToColorsItemWrap::GetPolyLinePen(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsItemWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsItemWrap>(info.Holder());
	vtkScalarsToColorsItem *native = (vtkScalarsToColorsItem *)wrapper->native.GetPointer();
	vtkPen * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPolyLinePen();
	VtkPenWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPenWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPenWrap *w = new VtkPenWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsItemWrap::GetUserBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsItemWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsItemWrap>(info.Holder());
	vtkScalarsToColorsItem *native = (vtkScalarsToColorsItem *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUserBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 4 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 4);
	memcpy(ab->GetContents().Data(), r, 4 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkScalarsToColorsItemWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsItemWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsItemWrap>(info.Holder());
	vtkScalarsToColorsItem *native = (vtkScalarsToColorsItem *)wrapper->native.GetPointer();
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

void VtkScalarsToColorsItemWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsItemWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsItemWrap>(info.Holder());
	vtkScalarsToColorsItem *native = (vtkScalarsToColorsItem *)wrapper->native.GetPointer();
	vtkScalarsToColorsItem * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkScalarsToColorsItemWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkScalarsToColorsItemWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkScalarsToColorsItemWrap *w = new VtkScalarsToColorsItemWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkScalarsToColorsItemWrap::Paint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsItemWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsItemWrap>(info.Holder());
	vtkScalarsToColorsItem *native = (vtkScalarsToColorsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkContext2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkContext2DWrap *a0 = ObjectWrap::Unwrap<VtkContext2DWrap>(info[0]->ToObject());
		bool r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->Paint(
			(vtkContext2D *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsItemWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsItemWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsItemWrap>(info.Holder());
	vtkScalarsToColorsItem *native = (vtkScalarsToColorsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkScalarsToColorsItem * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkScalarsToColorsItemWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkScalarsToColorsItemWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkScalarsToColorsItemWrap *w = new VtkScalarsToColorsItemWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsItemWrap::SetMaskAboveCurve(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsItemWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsItemWrap>(info.Holder());
	vtkScalarsToColorsItem *native = (vtkScalarsToColorsItem *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaskAboveCurve(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkScalarsToColorsItemWrap::SetUserBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkScalarsToColorsItemWrap *wrapper = ObjectWrap::Unwrap<VtkScalarsToColorsItemWrap>(info.Holder());
	vtkScalarsToColorsItem *native = (vtkScalarsToColorsItem *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUserBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
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
		native->SetUserBounds(
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
				if(info.Length() > 3 && info[3]->IsNumber())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetUserBounds(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->NumberValue()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

