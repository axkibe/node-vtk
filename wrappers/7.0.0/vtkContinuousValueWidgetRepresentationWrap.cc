/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkWidgetRepresentationWrap.h"
#include "vtkContinuousValueWidgetRepresentationWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkContinuousValueWidgetRepresentationWrap::ptpl;

VtkContinuousValueWidgetRepresentationWrap::VtkContinuousValueWidgetRepresentationWrap()
{ }

VtkContinuousValueWidgetRepresentationWrap::VtkContinuousValueWidgetRepresentationWrap(vtkSmartPointer<vtkContinuousValueWidgetRepresentation> _native)
{ native = _native; }

VtkContinuousValueWidgetRepresentationWrap::~VtkContinuousValueWidgetRepresentationWrap()
{ }

void VtkContinuousValueWidgetRepresentationWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkContinuousValueWidgetRepresentation").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ContinuousValueWidgetRepresentation").ToLocalChecked(), ConstructorGetter);
}

void VtkContinuousValueWidgetRepresentationWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkContinuousValueWidgetRepresentationWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkWidgetRepresentationWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkWidgetRepresentationWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkContinuousValueWidgetRepresentationWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildRepresentation", BuildRepresentation);
	Nan::SetPrototypeMethod(tpl, "buildRepresentation", BuildRepresentation);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PlaceWidget", PlaceWidget);
	Nan::SetPrototypeMethod(tpl, "placeWidget", PlaceWidget);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

#ifdef VTK_NODE_PLUS_VTKCONTINUOUSVALUEWIDGETREPRESENTATIONWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCONTINUOUSVALUEWIDGETREPRESENTATIONWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkContinuousValueWidgetRepresentationWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkContinuousValueWidgetRepresentationWrap::BuildRepresentation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContinuousValueWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkContinuousValueWidgetRepresentationWrap>(info.Holder());
	vtkContinuousValueWidgetRepresentation *native = (vtkContinuousValueWidgetRepresentation *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->BuildRepresentation();
}

void VtkContinuousValueWidgetRepresentationWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContinuousValueWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkContinuousValueWidgetRepresentationWrap>(info.Holder());
	vtkContinuousValueWidgetRepresentation *native = (vtkContinuousValueWidgetRepresentation *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkContinuousValueWidgetRepresentationWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContinuousValueWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkContinuousValueWidgetRepresentationWrap>(info.Holder());
	vtkContinuousValueWidgetRepresentation *native = (vtkContinuousValueWidgetRepresentation *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkContinuousValueWidgetRepresentationWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContinuousValueWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkContinuousValueWidgetRepresentationWrap>(info.Holder());
	vtkContinuousValueWidgetRepresentation *native = (vtkContinuousValueWidgetRepresentation *)wrapper->native.GetPointer();
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

void VtkContinuousValueWidgetRepresentationWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContinuousValueWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkContinuousValueWidgetRepresentationWrap>(info.Holder());
	vtkContinuousValueWidgetRepresentation *native = (vtkContinuousValueWidgetRepresentation *)wrapper->native.GetPointer();
	vtkContinuousValueWidgetRepresentation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkContinuousValueWidgetRepresentationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkContinuousValueWidgetRepresentationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkContinuousValueWidgetRepresentationWrap *w = new VtkContinuousValueWidgetRepresentationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkContinuousValueWidgetRepresentationWrap::PlaceWidget(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContinuousValueWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkContinuousValueWidgetRepresentationWrap>(info.Holder());
	vtkContinuousValueWidgetRepresentation *native = (vtkContinuousValueWidgetRepresentation *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PlaceWidget(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
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
		native->PlaceWidget(
			b0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContinuousValueWidgetRepresentationWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContinuousValueWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkContinuousValueWidgetRepresentationWrap>(info.Holder());
	vtkContinuousValueWidgetRepresentation *native = (vtkContinuousValueWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkContinuousValueWidgetRepresentation * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkContinuousValueWidgetRepresentationWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkContinuousValueWidgetRepresentationWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkContinuousValueWidgetRepresentationWrap *w = new VtkContinuousValueWidgetRepresentationWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkContinuousValueWidgetRepresentationWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkContinuousValueWidgetRepresentationWrap *wrapper = ObjectWrap::Unwrap<VtkContinuousValueWidgetRepresentationWrap>(info.Holder());
	vtkContinuousValueWidgetRepresentation *native = (vtkContinuousValueWidgetRepresentation *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

