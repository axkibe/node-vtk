/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkCleanPolyDataWrap.h"
#include "vtkQuantizePolyDataPointsWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkQuantizePolyDataPointsWrap::ptpl;

VtkQuantizePolyDataPointsWrap::VtkQuantizePolyDataPointsWrap()
{ }

VtkQuantizePolyDataPointsWrap::VtkQuantizePolyDataPointsWrap(vtkSmartPointer<vtkQuantizePolyDataPoints> _native)
{ native = _native; }

VtkQuantizePolyDataPointsWrap::~VtkQuantizePolyDataPointsWrap()
{ }

void VtkQuantizePolyDataPointsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkQuantizePolyDataPoints").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("QuantizePolyDataPoints").ToLocalChecked(), ConstructorGetter);
}

void VtkQuantizePolyDataPointsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkQuantizePolyDataPointsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkCleanPolyDataWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkCleanPolyDataWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkQuantizePolyDataPointsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetQFactor", GetQFactor);
	Nan::SetPrototypeMethod(tpl, "getQFactor", GetQFactor);

	Nan::SetPrototypeMethod(tpl, "GetQFactorMaxValue", GetQFactorMaxValue);
	Nan::SetPrototypeMethod(tpl, "getQFactorMaxValue", GetQFactorMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetQFactorMinValue", GetQFactorMinValue);
	Nan::SetPrototypeMethod(tpl, "getQFactorMinValue", GetQFactorMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "OperateOnBounds", OperateOnBounds);
	Nan::SetPrototypeMethod(tpl, "operateOnBounds", OperateOnBounds);

	Nan::SetPrototypeMethod(tpl, "OperateOnPoint", OperateOnPoint);
	Nan::SetPrototypeMethod(tpl, "operateOnPoint", OperateOnPoint);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetQFactor", SetQFactor);
	Nan::SetPrototypeMethod(tpl, "setQFactor", SetQFactor);

	ptpl.Reset( tpl );
}

void VtkQuantizePolyDataPointsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkQuantizePolyDataPoints> native = vtkSmartPointer<vtkQuantizePolyDataPoints>::New();
		VtkQuantizePolyDataPointsWrap* obj = new VtkQuantizePolyDataPointsWrap(native);
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

void VtkQuantizePolyDataPointsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuantizePolyDataPointsWrap *wrapper = ObjectWrap::Unwrap<VtkQuantizePolyDataPointsWrap>(info.Holder());
	vtkQuantizePolyDataPoints *native = (vtkQuantizePolyDataPoints *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkQuantizePolyDataPointsWrap::GetQFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuantizePolyDataPointsWrap *wrapper = ObjectWrap::Unwrap<VtkQuantizePolyDataPointsWrap>(info.Holder());
	vtkQuantizePolyDataPoints *native = (vtkQuantizePolyDataPoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQFactor();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuantizePolyDataPointsWrap::GetQFactorMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuantizePolyDataPointsWrap *wrapper = ObjectWrap::Unwrap<VtkQuantizePolyDataPointsWrap>(info.Holder());
	vtkQuantizePolyDataPoints *native = (vtkQuantizePolyDataPoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQFactorMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuantizePolyDataPointsWrap::GetQFactorMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuantizePolyDataPointsWrap *wrapper = ObjectWrap::Unwrap<VtkQuantizePolyDataPointsWrap>(info.Holder());
	vtkQuantizePolyDataPoints *native = (vtkQuantizePolyDataPoints *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQFactorMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkQuantizePolyDataPointsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuantizePolyDataPointsWrap *wrapper = ObjectWrap::Unwrap<VtkQuantizePolyDataPointsWrap>(info.Holder());
	vtkQuantizePolyDataPoints *native = (vtkQuantizePolyDataPoints *)wrapper->native.GetPointer();
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

void VtkQuantizePolyDataPointsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuantizePolyDataPointsWrap *wrapper = ObjectWrap::Unwrap<VtkQuantizePolyDataPointsWrap>(info.Holder());
	vtkQuantizePolyDataPoints *native = (vtkQuantizePolyDataPoints *)wrapper->native.GetPointer();
	vtkQuantizePolyDataPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkQuantizePolyDataPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkQuantizePolyDataPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkQuantizePolyDataPointsWrap *w = new VtkQuantizePolyDataPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkQuantizePolyDataPointsWrap::OperateOnBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuantizePolyDataPointsWrap *wrapper = ObjectWrap::Unwrap<VtkQuantizePolyDataPointsWrap>(info.Holder());
	vtkQuantizePolyDataPoints *native = (vtkQuantizePolyDataPoints *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1( v8::Local<v8::Array>::Cast( info[1]->ToObject() ) );
			double b1[6];
			if( a1->Length() < 6 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 6; i++ )
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
			native->OperateOnBounds(
				b0,
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuantizePolyDataPointsWrap::OperateOnPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuantizePolyDataPointsWrap *wrapper = ObjectWrap::Unwrap<VtkQuantizePolyDataPointsWrap>(info.Holder());
	vtkQuantizePolyDataPoints *native = (vtkQuantizePolyDataPoints *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0( v8::Local<v8::Array>::Cast( info[0]->ToObject() ) );
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
		if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1( v8::Local<v8::Array>::Cast( info[1]->ToObject() ) );
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
			native->OperateOnPoint(
				b0,
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuantizePolyDataPointsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuantizePolyDataPointsWrap *wrapper = ObjectWrap::Unwrap<VtkQuantizePolyDataPointsWrap>(info.Holder());
	vtkQuantizePolyDataPoints *native = (vtkQuantizePolyDataPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkQuantizePolyDataPoints * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkQuantizePolyDataPointsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkQuantizePolyDataPointsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkQuantizePolyDataPointsWrap *w = new VtkQuantizePolyDataPointsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkQuantizePolyDataPointsWrap::SetQFactor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkQuantizePolyDataPointsWrap *wrapper = ObjectWrap::Unwrap<VtkQuantizePolyDataPointsWrap>(info.Holder());
	vtkQuantizePolyDataPoints *native = (vtkQuantizePolyDataPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetQFactor(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

