/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkTessellatedBoxSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkTessellatedBoxSourceWrap::constructor;

VtkTessellatedBoxSourceWrap::VtkTessellatedBoxSourceWrap()
{ }

VtkTessellatedBoxSourceWrap::VtkTessellatedBoxSourceWrap(vtkSmartPointer<vtkTessellatedBoxSource> _native)
{ native = _native; }

VtkTessellatedBoxSourceWrap::~VtkTessellatedBoxSourceWrap()
{ }

void VtkTessellatedBoxSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkTessellatedBoxSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkPolyDataAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkTessellatedBoxSource").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("TessellatedBoxSource").ToLocalChecked(),tpl->GetFunction());
}

void VtkTessellatedBoxSourceWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "DuplicateSharedPointsOff", DuplicateSharedPointsOff);
	Nan::SetPrototypeMethod(tpl, "duplicateSharedPointsOff", DuplicateSharedPointsOff);

	Nan::SetPrototypeMethod(tpl, "DuplicateSharedPointsOn", DuplicateSharedPointsOn);
	Nan::SetPrototypeMethod(tpl, "duplicateSharedPointsOn", DuplicateSharedPointsOn);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDuplicateSharedPoints", GetDuplicateSharedPoints);
	Nan::SetPrototypeMethod(tpl, "getDuplicateSharedPoints", GetDuplicateSharedPoints);

	Nan::SetPrototypeMethod(tpl, "GetLevel", GetLevel);
	Nan::SetPrototypeMethod(tpl, "getLevel", GetLevel);

	Nan::SetPrototypeMethod(tpl, "GetOutputPointsPrecision", GetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "getOutputPointsPrecision", GetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "GetQuads", GetQuads);
	Nan::SetPrototypeMethod(tpl, "getQuads", GetQuads);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "QuadsOff", QuadsOff);
	Nan::SetPrototypeMethod(tpl, "quadsOff", QuadsOff);

	Nan::SetPrototypeMethod(tpl, "QuadsOn", QuadsOn);
	Nan::SetPrototypeMethod(tpl, "quadsOn", QuadsOn);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

	Nan::SetPrototypeMethod(tpl, "SetDuplicateSharedPoints", SetDuplicateSharedPoints);
	Nan::SetPrototypeMethod(tpl, "setDuplicateSharedPoints", SetDuplicateSharedPoints);

	Nan::SetPrototypeMethod(tpl, "SetLevel", SetLevel);
	Nan::SetPrototypeMethod(tpl, "setLevel", SetLevel);

	Nan::SetPrototypeMethod(tpl, "SetOutputPointsPrecision", SetOutputPointsPrecision);
	Nan::SetPrototypeMethod(tpl, "setOutputPointsPrecision", SetOutputPointsPrecision);

	Nan::SetPrototypeMethod(tpl, "SetQuads", SetQuads);
	Nan::SetPrototypeMethod(tpl, "setQuads", SetQuads);

}

void VtkTessellatedBoxSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTessellatedBoxSource> native = vtkSmartPointer<vtkTessellatedBoxSource>::New();
		VtkTessellatedBoxSourceWrap* obj = new VtkTessellatedBoxSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkTessellatedBoxSourceWrap::DuplicateSharedPointsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DuplicateSharedPointsOff();
}

void VtkTessellatedBoxSourceWrap::DuplicateSharedPointsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DuplicateSharedPointsOn();
}

void VtkTessellatedBoxSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTessellatedBoxSourceWrap::GetDuplicateSharedPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDuplicateSharedPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTessellatedBoxSourceWrap::GetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTessellatedBoxSourceWrap::GetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputPointsPrecision();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTessellatedBoxSourceWrap::GetQuads(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetQuads();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTessellatedBoxSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
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

void VtkTessellatedBoxSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	vtkTessellatedBoxSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkTessellatedBoxSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTessellatedBoxSourceWrap *w = new VtkTessellatedBoxSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTessellatedBoxSourceWrap::QuadsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->QuadsOff();
}

void VtkTessellatedBoxSourceWrap::QuadsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->QuadsOn();
}

void VtkTessellatedBoxSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTessellatedBoxSource * r;
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
			Nan::New<v8::Function>(VtkTessellatedBoxSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTessellatedBoxSourceWrap *w = new VtkTessellatedBoxSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTessellatedBoxSourceWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
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

void VtkTessellatedBoxSourceWrap::SetDuplicateSharedPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDuplicateSharedPoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTessellatedBoxSourceWrap::SetLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTessellatedBoxSourceWrap::SetOutputPointsPrecision(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputPointsPrecision(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTessellatedBoxSourceWrap::SetQuads(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTessellatedBoxSourceWrap *wrapper = ObjectWrap::Unwrap<VtkTessellatedBoxSourceWrap>(info.Holder());
	vtkTessellatedBoxSource *native = (vtkTessellatedBoxSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetQuads(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

