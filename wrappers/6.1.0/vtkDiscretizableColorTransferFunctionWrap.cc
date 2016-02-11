/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkColorTransferFunctionWrap.h"
#include "vtkDiscretizableColorTransferFunctionWrap.h"
#include "vtkObjectWrap.h"
#include "vtkUnsignedCharArrayWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkPiecewiseFunctionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDiscretizableColorTransferFunctionWrap::ptpl;

VtkDiscretizableColorTransferFunctionWrap::VtkDiscretizableColorTransferFunctionWrap()
{ }

VtkDiscretizableColorTransferFunctionWrap::VtkDiscretizableColorTransferFunctionWrap(vtkSmartPointer<vtkDiscretizableColorTransferFunction> _native)
{ native = _native; }

VtkDiscretizableColorTransferFunctionWrap::~VtkDiscretizableColorTransferFunctionWrap()
{ }

void VtkDiscretizableColorTransferFunctionWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDiscretizableColorTransferFunction").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DiscretizableColorTransferFunction").ToLocalChecked(), ConstructorGetter);
}

void VtkDiscretizableColorTransferFunctionWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDiscretizableColorTransferFunctionWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkColorTransferFunctionWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkColorTransferFunctionWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDiscretizableColorTransferFunctionWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "Build", Build);
	Nan::SetPrototypeMethod(tpl, "build", Build);

	Nan::SetPrototypeMethod(tpl, "DiscretizeOff", DiscretizeOff);
	Nan::SetPrototypeMethod(tpl, "discretizeOff", DiscretizeOff);

	Nan::SetPrototypeMethod(tpl, "DiscretizeOn", DiscretizeOn);
	Nan::SetPrototypeMethod(tpl, "discretizeOn", DiscretizeOn);

	Nan::SetPrototypeMethod(tpl, "EnableOpacityMappingOff", EnableOpacityMappingOff);
	Nan::SetPrototypeMethod(tpl, "enableOpacityMappingOff", EnableOpacityMappingOff);

	Nan::SetPrototypeMethod(tpl, "EnableOpacityMappingOn", EnableOpacityMappingOn);
	Nan::SetPrototypeMethod(tpl, "enableOpacityMappingOn", EnableOpacityMappingOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColor", GetColor);
	Nan::SetPrototypeMethod(tpl, "getColor", GetColor);

	Nan::SetPrototypeMethod(tpl, "GetDiscretize", GetDiscretize);
	Nan::SetPrototypeMethod(tpl, "getDiscretize", GetDiscretize);

	Nan::SetPrototypeMethod(tpl, "GetEnableOpacityMapping", GetEnableOpacityMapping);
	Nan::SetPrototypeMethod(tpl, "getEnableOpacityMapping", GetEnableOpacityMapping);

	Nan::SetPrototypeMethod(tpl, "GetOpacity", GetOpacity);
	Nan::SetPrototypeMethod(tpl, "getOpacity", GetOpacity);

	Nan::SetPrototypeMethod(tpl, "GetScalarOpacityFunction", GetScalarOpacityFunction);
	Nan::SetPrototypeMethod(tpl, "getScalarOpacityFunction", GetScalarOpacityFunction);

	Nan::SetPrototypeMethod(tpl, "GetUseLogScale", GetUseLogScale);
	Nan::SetPrototypeMethod(tpl, "getUseLogScale", GetUseLogScale);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsOpaque", IsOpaque);
	Nan::SetPrototypeMethod(tpl, "isOpaque", IsOpaque);

	Nan::SetPrototypeMethod(tpl, "MapScalars", MapScalars);
	Nan::SetPrototypeMethod(tpl, "mapScalars", MapScalars);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAlpha", SetAlpha);
	Nan::SetPrototypeMethod(tpl, "setAlpha", SetAlpha);

	Nan::SetPrototypeMethod(tpl, "SetDiscretize", SetDiscretize);
	Nan::SetPrototypeMethod(tpl, "setDiscretize", SetDiscretize);

	Nan::SetPrototypeMethod(tpl, "SetEnableOpacityMapping", SetEnableOpacityMapping);
	Nan::SetPrototypeMethod(tpl, "setEnableOpacityMapping", SetEnableOpacityMapping);

	Nan::SetPrototypeMethod(tpl, "SetNanColor", SetNanColor);
	Nan::SetPrototypeMethod(tpl, "setNanColor", SetNanColor);

	Nan::SetPrototypeMethod(tpl, "SetScalarOpacityFunction", SetScalarOpacityFunction);
	Nan::SetPrototypeMethod(tpl, "setScalarOpacityFunction", SetScalarOpacityFunction);

	Nan::SetPrototypeMethod(tpl, "SetUseLogScale", SetUseLogScale);
	Nan::SetPrototypeMethod(tpl, "setUseLogScale", SetUseLogScale);

	Nan::SetPrototypeMethod(tpl, "UsingLogScale", UsingLogScale);
	Nan::SetPrototypeMethod(tpl, "usingLogScale", UsingLogScale);

	ptpl.Reset( tpl );
}

void VtkDiscretizableColorTransferFunctionWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDiscretizableColorTransferFunction> native = vtkSmartPointer<vtkDiscretizableColorTransferFunction>::New();
		VtkDiscretizableColorTransferFunctionWrap* obj = new VtkDiscretizableColorTransferFunctionWrap(native);
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

void VtkDiscretizableColorTransferFunctionWrap::Build(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Build();
}

void VtkDiscretizableColorTransferFunctionWrap::DiscretizeOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DiscretizeOff();
}

void VtkDiscretizableColorTransferFunctionWrap::DiscretizeOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DiscretizeOn();
}

void VtkDiscretizableColorTransferFunctionWrap::EnableOpacityMappingOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableOpacityMappingOff();
}

void VtkDiscretizableColorTransferFunctionWrap::EnableOpacityMappingOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableOpacityMappingOn();
}

void VtkDiscretizableColorTransferFunctionWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDiscretizableColorTransferFunctionWrap::GetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetColor(
				info[0]->NumberValue(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[3];
			if( a1->Length() < 3 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 3; i++ )
			{
				if( !a1->Get(i)->IsNumber() )
				{
					Nan::ThrowError("Array contents invalid.");
					return;
				}
				b1[i] = a1->Get(i)->NumberValue();
			}
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetColor(
				info[0]->NumberValue(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiscretizableColorTransferFunctionWrap::GetDiscretize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDiscretize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiscretizableColorTransferFunctionWrap::GetEnableOpacityMapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetEnableOpacityMapping();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiscretizableColorTransferFunctionWrap::GetOpacity(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetOpacity(
			info[0]->NumberValue()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiscretizableColorTransferFunctionWrap::GetScalarOpacityFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	vtkPiecewiseFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarOpacityFunction();
	VtkPiecewiseFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPiecewiseFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPiecewiseFunctionWrap *w = new VtkPiecewiseFunctionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDiscretizableColorTransferFunctionWrap::GetUseLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseLogScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiscretizableColorTransferFunctionWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
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

void VtkDiscretizableColorTransferFunctionWrap::IsOpaque(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsOpaque();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiscretizableColorTransferFunctionWrap::MapScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				vtkUnsignedCharArray * r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->MapScalars(
					(vtkDataArray *) a0->native.GetPointer(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				VtkUnsignedCharArrayWrap::InitPtpl();
				v8::Local<v8::Value> argv[1] =
					{ Nan::New(vtkNodeJsNoWrap) };
				v8::Local<v8::Function> cons =
					Nan::New<v8::FunctionTemplate>(VtkUnsignedCharArrayWrap::ptpl)->GetFunction();
				v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
				VtkUnsignedCharArrayWrap *w = new VtkUnsignedCharArrayWrap();
				w->native = r;
				w->Wrap(wo);
				info.GetReturnValue().Set(wo);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiscretizableColorTransferFunctionWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	vtkDiscretizableColorTransferFunction * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDiscretizableColorTransferFunctionWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDiscretizableColorTransferFunctionWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDiscretizableColorTransferFunctionWrap *w = new VtkDiscretizableColorTransferFunctionWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDiscretizableColorTransferFunctionWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDiscretizableColorTransferFunction * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkDiscretizableColorTransferFunctionWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDiscretizableColorTransferFunctionWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDiscretizableColorTransferFunctionWrap *w = new VtkDiscretizableColorTransferFunctionWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiscretizableColorTransferFunctionWrap::SetAlpha(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAlpha(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiscretizableColorTransferFunctionWrap::SetDiscretize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDiscretize(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiscretizableColorTransferFunctionWrap::SetEnableOpacityMapping(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetEnableOpacityMapping(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiscretizableColorTransferFunctionWrap::SetNanColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
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
		native->SetNanColor(
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
		native->SetNanColor(
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
				native->SetNanColor(
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

void VtkDiscretizableColorTransferFunctionWrap::SetScalarOpacityFunction(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPiecewiseFunctionWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPiecewiseFunctionWrap *a0 = ObjectWrap::Unwrap<VtkPiecewiseFunctionWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarOpacityFunction(
			(vtkPiecewiseFunction *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiscretizableColorTransferFunctionWrap::SetUseLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseLogScale(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiscretizableColorTransferFunctionWrap::UsingLogScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiscretizableColorTransferFunctionWrap *wrapper = ObjectWrap::Unwrap<VtkDiscretizableColorTransferFunctionWrap>(info.Holder());
	vtkDiscretizableColorTransferFunction *native = (vtkDiscretizableColorTransferFunction *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->UsingLogScale();
	info.GetReturnValue().Set(Nan::New(r));
}

