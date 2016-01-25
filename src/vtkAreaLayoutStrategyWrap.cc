/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkAreaLayoutStrategyWrap.h"
#include "vtkTreeWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAreaLayoutStrategyWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkAreaLayoutStrategyWrap::ptpl;

VtkAreaLayoutStrategyWrap::VtkAreaLayoutStrategyWrap()
{ }

VtkAreaLayoutStrategyWrap::VtkAreaLayoutStrategyWrap(vtkSmartPointer<vtkAreaLayoutStrategy> _native)
{ native = _native; }

VtkAreaLayoutStrategyWrap::~VtkAreaLayoutStrategyWrap()
{ }

void VtkAreaLayoutStrategyWrap::Init(v8::Local<v8::Object> exports)
{
	if (!constructor.IsEmpty()) return;
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::Init( exports );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));

	tpl->SetClassName(Nan::New("VtkAreaLayoutStrategyWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );

	exports->Set(Nan::New("vtkAreaLayoutStrategy").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("AreaLayoutStrategy").ToLocalChecked(),tpl->GetFunction());
}

void VtkAreaLayoutStrategyWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetShrinkPercentage", GetShrinkPercentage);
	Nan::SetPrototypeMethod(tpl, "getShrinkPercentage", GetShrinkPercentage);

	Nan::SetPrototypeMethod(tpl, "GetShrinkPercentageMaxValue", GetShrinkPercentageMaxValue);
	Nan::SetPrototypeMethod(tpl, "getShrinkPercentageMaxValue", GetShrinkPercentageMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetShrinkPercentageMinValue", GetShrinkPercentageMinValue);
	Nan::SetPrototypeMethod(tpl, "getShrinkPercentageMinValue", GetShrinkPercentageMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "Layout", Layout);
	Nan::SetPrototypeMethod(tpl, "layout", Layout);

	Nan::SetPrototypeMethod(tpl, "LayoutEdgePoints", LayoutEdgePoints);
	Nan::SetPrototypeMethod(tpl, "layoutEdgePoints", LayoutEdgePoints);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetShrinkPercentage", SetShrinkPercentage);
	Nan::SetPrototypeMethod(tpl, "setShrinkPercentage", SetShrinkPercentage);

}

void VtkAreaLayoutStrategyWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAreaLayoutStrategyWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutStrategyWrap>(info.Holder());
	vtkAreaLayoutStrategy *native = (vtkAreaLayoutStrategy *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAreaLayoutStrategyWrap::GetShrinkPercentage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutStrategyWrap>(info.Holder());
	vtkAreaLayoutStrategy *native = (vtkAreaLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShrinkPercentage();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAreaLayoutStrategyWrap::GetShrinkPercentageMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutStrategyWrap>(info.Holder());
	vtkAreaLayoutStrategy *native = (vtkAreaLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShrinkPercentageMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAreaLayoutStrategyWrap::GetShrinkPercentageMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutStrategyWrap>(info.Holder());
	vtkAreaLayoutStrategy *native = (vtkAreaLayoutStrategy *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetShrinkPercentageMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAreaLayoutStrategyWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutStrategyWrap>(info.Holder());
	vtkAreaLayoutStrategy *native = (vtkAreaLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkAreaLayoutStrategyWrap::Layout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutStrategyWrap>(info.Holder());
	vtkAreaLayoutStrategy *native = (vtkAreaLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTreeWrap *a0 = ObjectWrap::Unwrap<VtkTreeWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject())
			{
				VtkDataArrayWrap *a2 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[2]->ToObject());
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->Layout(
					(vtkTree *) a0->native.GetPointer(),
					(vtkDataArray *) a1->native.GetPointer(),
					(vtkDataArray *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAreaLayoutStrategyWrap::LayoutEdgePoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutStrategyWrap>(info.Holder());
	vtkAreaLayoutStrategy *native = (vtkAreaLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkTreeWrap *a0 = ObjectWrap::Unwrap<VtkTreeWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject())
			{
				VtkDataArrayWrap *a2 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[2]->ToObject());
				if(info.Length() > 3 && info[3]->IsObject())
				{
					VtkTreeWrap *a3 = ObjectWrap::Unwrap<VtkTreeWrap>(info[3]->ToObject());
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->LayoutEdgePoints(
						(vtkTree *) a0->native.GetPointer(),
						(vtkDataArray *) a1->native.GetPointer(),
						(vtkDataArray *) a2->native.GetPointer(),
						(vtkTree *) a3->native.GetPointer()
					);
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAreaLayoutStrategyWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutStrategyWrap>(info.Holder());
	vtkAreaLayoutStrategy *native = (vtkAreaLayoutStrategy *)wrapper->native.GetPointer();
	vtkAreaLayoutStrategy * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAreaLayoutStrategyWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAreaLayoutStrategyWrap *w = new VtkAreaLayoutStrategyWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAreaLayoutStrategyWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutStrategyWrap>(info.Holder());
	vtkAreaLayoutStrategy *native = (vtkAreaLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAreaLayoutStrategy * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkAreaLayoutStrategyWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAreaLayoutStrategyWrap *w = new VtkAreaLayoutStrategyWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAreaLayoutStrategyWrap::SetShrinkPercentage(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAreaLayoutStrategyWrap *wrapper = ObjectWrap::Unwrap<VtkAreaLayoutStrategyWrap>(info.Holder());
	vtkAreaLayoutStrategy *native = (vtkAreaLayoutStrategy *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetShrinkPercentage(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
