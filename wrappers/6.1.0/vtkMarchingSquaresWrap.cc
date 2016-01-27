/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkMarchingSquaresWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIncrementalPointLocatorWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkMarchingSquaresWrap::ptpl;

VtkMarchingSquaresWrap::VtkMarchingSquaresWrap()
{ }

VtkMarchingSquaresWrap::VtkMarchingSquaresWrap(vtkSmartPointer<vtkMarchingSquares> _native)
{ native = _native; }

VtkMarchingSquaresWrap::~VtkMarchingSquaresWrap()
{ }

void VtkMarchingSquaresWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkMarchingSquares").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("MarchingSquares").ToLocalChecked(), ConstructorGetter);
}

void VtkMarchingSquaresWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkMarchingSquaresWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkMarchingSquaresWrap").ToLocalChecked());
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

	Nan::SetPrototypeMethod(tpl, "SetImageRange", SetImageRange);
	Nan::SetPrototypeMethod(tpl, "setImageRange", SetImageRange);

	Nan::SetPrototypeMethod(tpl, "SetLocator", SetLocator);
	Nan::SetPrototypeMethod(tpl, "setLocator", SetLocator);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfContours", SetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "setNumberOfContours", SetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

	ptpl.Reset( tpl );
}

void VtkMarchingSquaresWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkMarchingSquares> native = vtkSmartPointer<vtkMarchingSquares>::New();
		VtkMarchingSquaresWrap* obj = new VtkMarchingSquaresWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkMarchingSquaresWrap::CreateDefaultLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLocator();
}

void VtkMarchingSquaresWrap::GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
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

void VtkMarchingSquaresWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkMarchingSquaresWrap::GetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
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
		Nan::New<v8::FunctionTemplate>(VtkIncrementalPointLocatorWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkIncrementalPointLocatorWrap *w = new VtkIncrementalPointLocatorWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMarchingSquaresWrap::GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfContours();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkMarchingSquaresWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
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

void VtkMarchingSquaresWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
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

void VtkMarchingSquaresWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
	vtkMarchingSquares * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkMarchingSquaresWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkMarchingSquaresWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkMarchingSquaresWrap *w = new VtkMarchingSquaresWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkMarchingSquaresWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkMarchingSquares * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkMarchingSquaresWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkMarchingSquaresWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkMarchingSquaresWrap *w = new VtkMarchingSquaresWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMarchingSquaresWrap::SetImageRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						if(info.Length() > 5 && info[5]->IsInt32())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetImageRange(
								info[0]->Int32Value(),
								info[1]->Int32Value(),
								info[2]->Int32Value(),
								info[3]->Int32Value(),
								info[4]->Int32Value(),
								info[5]->Int32Value()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkMarchingSquaresWrap::SetLocator(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
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

void VtkMarchingSquaresWrap::SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
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

void VtkMarchingSquaresWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkMarchingSquaresWrap *wrapper = ObjectWrap::Unwrap<VtkMarchingSquaresWrap>(info.Holder());
	vtkMarchingSquares *native = (vtkMarchingSquares *)wrapper->native.GetPointer();
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

