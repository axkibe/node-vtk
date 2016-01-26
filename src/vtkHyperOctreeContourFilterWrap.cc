/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkHyperOctreeContourFilterWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkHyperOctreeContourFilterWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkHyperOctreeContourFilterWrap::ptpl;

VtkHyperOctreeContourFilterWrap::VtkHyperOctreeContourFilterWrap()
{ }

VtkHyperOctreeContourFilterWrap::VtkHyperOctreeContourFilterWrap(vtkSmartPointer<vtkHyperOctreeContourFilter> _native)
{ native = _native; }

VtkHyperOctreeContourFilterWrap::~VtkHyperOctreeContourFilterWrap()
{ }

void VtkHyperOctreeContourFilterWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperOctreeContourFilter").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperOctreeContourFilter").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperOctreeContourFilterWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperOctreeContourFilterWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperOctreeContourFilterWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLocator", CreateDefaultLocator);
	Nan::SetPrototypeMethod(tpl, "createDefaultLocator", CreateDefaultLocator);

	Nan::SetPrototypeMethod(tpl, "GenerateValues", GenerateValues);
	Nan::SetPrototypeMethod(tpl, "generateValues", GenerateValues);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLocator", GetLocator);
	Nan::SetPrototypeMethod(tpl, "getLocator", GetLocator);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfContours", GetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "getNumberOfContours", GetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfContours", SetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "setNumberOfContours", SetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkHyperOctreeContourFilterWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperOctreeContourFilter> native = vtkSmartPointer<vtkHyperOctreeContourFilter>::New();
		VtkHyperOctreeContourFilterWrap* obj = new VtkHyperOctreeContourFilterWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkHyperOctreeContourFilterWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeContourFilterWrap>(info.Holder());
	vtkHyperOctreeContourFilter *native = (vtkHyperOctreeContourFilter *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkHyperOctreeContourFilterWrap::GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeContourFilterWrap>(info.Holder());
	vtkHyperOctreeContourFilter *native = (vtkHyperOctreeContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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
				native->GenerateValues(
					info[0]->Int32Value(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeContourFilterWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeContourFilterWrap>(info.Holder());
	vtkHyperOctreeContourFilter *native = (vtkHyperOctreeContourFilter *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperOctreeContourFilterWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeContourFilterWrap>(info.Holder());
	vtkHyperOctreeContourFilter *native = (vtkHyperOctreeContourFilter *)wrapper->native.GetPointer();
	vtkIncrementalPointLocator * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLocator();
		VtkIncrementalPointLocatorWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkIncrementalPointLocatorWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalPointLocatorWrap *w = new VtkIncrementalPointLocatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeContourFilterWrap::GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeContourFilterWrap>(info.Holder());
	vtkHyperOctreeContourFilter *native = (vtkHyperOctreeContourFilter *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfContours();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeContourFilterWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeContourFilterWrap>(info.Holder());
	vtkHyperOctreeContourFilter *native = (vtkHyperOctreeContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetValue(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeContourFilterWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeContourFilterWrap>(info.Holder());
	vtkHyperOctreeContourFilter *native = (vtkHyperOctreeContourFilter *)wrapper->native.GetPointer();
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

void VtkHyperOctreeContourFilterWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeContourFilterWrap>(info.Holder());
	vtkHyperOctreeContourFilter *native = (vtkHyperOctreeContourFilter *)wrapper->native.GetPointer();
	vtkHyperOctreeContourFilter * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkHyperOctreeContourFilterWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkHyperOctreeContourFilterWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeContourFilterWrap *w = new VtkHyperOctreeContourFilterWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeContourFilterWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeContourFilterWrap>(info.Holder());
	vtkHyperOctreeContourFilter *native = (vtkHyperOctreeContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHyperOctreeContourFilter * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkHyperOctreeContourFilterWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkHyperOctreeContourFilterWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeContourFilterWrap *w = new VtkHyperOctreeContourFilterWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeContourFilterWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeContourFilterWrap>(info.Holder());
	vtkHyperOctreeContourFilter *native = (vtkHyperOctreeContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIncrementalPointLocatorWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIncrementalPointLocatorWrap *a0 = ObjectWrap::Unwrap<VtkIncrementalPointLocatorWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLocator(
			(vtkIncrementalPointLocator *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeContourFilterWrap::SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeContourFilterWrap>(info.Holder());
	vtkHyperOctreeContourFilter *native = (vtkHyperOctreeContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfContours(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeContourFilterWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeContourFilterWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeContourFilterWrap>(info.Holder());
	vtkHyperOctreeContourFilter *native = (vtkHyperOctreeContourFilter *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetValue(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

