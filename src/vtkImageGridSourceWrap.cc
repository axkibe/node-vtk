/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageGridSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageGridSourceWrap::constructor;

VtkImageGridSourceWrap::VtkImageGridSourceWrap()
{ }

VtkImageGridSourceWrap::VtkImageGridSourceWrap(vtkSmartPointer<vtkImageGridSource> _native)
{ native = _native; }

VtkImageGridSourceWrap::~VtkImageGridSourceWrap()
{ }

void VtkImageGridSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkImageGridSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkImageAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkImageGridSource").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageGridSource").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageGridSourceWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataScalarType", GetDataScalarType);
	Nan::SetPrototypeMethod(tpl, "getDataScalarType", GetDataScalarType);

	Nan::SetPrototypeMethod(tpl, "GetDataScalarTypeAsString", GetDataScalarTypeAsString);
	Nan::SetPrototypeMethod(tpl, "getDataScalarTypeAsString", GetDataScalarTypeAsString);

	Nan::SetPrototypeMethod(tpl, "GetFillValue", GetFillValue);
	Nan::SetPrototypeMethod(tpl, "getFillValue", GetFillValue);

	Nan::SetPrototypeMethod(tpl, "GetLineValue", GetLineValue);
	Nan::SetPrototypeMethod(tpl, "getLineValue", GetLineValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDataExtent", SetDataExtent);
	Nan::SetPrototypeMethod(tpl, "setDataExtent", SetDataExtent);

	Nan::SetPrototypeMethod(tpl, "SetDataOrigin", SetDataOrigin);
	Nan::SetPrototypeMethod(tpl, "setDataOrigin", SetDataOrigin);

	Nan::SetPrototypeMethod(tpl, "SetDataScalarType", SetDataScalarType);
	Nan::SetPrototypeMethod(tpl, "setDataScalarType", SetDataScalarType);

	Nan::SetPrototypeMethod(tpl, "SetDataScalarTypeToDouble", SetDataScalarTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setDataScalarTypeToDouble", SetDataScalarTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetDataScalarTypeToInt", SetDataScalarTypeToInt);
	Nan::SetPrototypeMethod(tpl, "setDataScalarTypeToInt", SetDataScalarTypeToInt);

	Nan::SetPrototypeMethod(tpl, "SetDataScalarTypeToShort", SetDataScalarTypeToShort);
	Nan::SetPrototypeMethod(tpl, "setDataScalarTypeToShort", SetDataScalarTypeToShort);

	Nan::SetPrototypeMethod(tpl, "SetDataScalarTypeToUnsignedChar", SetDataScalarTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setDataScalarTypeToUnsignedChar", SetDataScalarTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetDataScalarTypeToUnsignedShort", SetDataScalarTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setDataScalarTypeToUnsignedShort", SetDataScalarTypeToUnsignedShort);

	Nan::SetPrototypeMethod(tpl, "SetDataSpacing", SetDataSpacing);
	Nan::SetPrototypeMethod(tpl, "setDataSpacing", SetDataSpacing);

	Nan::SetPrototypeMethod(tpl, "SetFillValue", SetFillValue);
	Nan::SetPrototypeMethod(tpl, "setFillValue", SetFillValue);

	Nan::SetPrototypeMethod(tpl, "SetGridOrigin", SetGridOrigin);
	Nan::SetPrototypeMethod(tpl, "setGridOrigin", SetGridOrigin);

	Nan::SetPrototypeMethod(tpl, "SetGridSpacing", SetGridSpacing);
	Nan::SetPrototypeMethod(tpl, "setGridSpacing", SetGridSpacing);

	Nan::SetPrototypeMethod(tpl, "SetLineValue", SetLineValue);
	Nan::SetPrototypeMethod(tpl, "setLineValue", SetLineValue);

}

void VtkImageGridSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageGridSource> native = vtkSmartPointer<vtkImageGridSource>::New();
		VtkImageGridSourceWrap* obj = new VtkImageGridSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageGridSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageGridSourceWrap::GetDataScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGridSourceWrap::GetDataScalarTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataScalarTypeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageGridSourceWrap::GetFillValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFillValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGridSourceWrap::GetLineValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLineValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageGridSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
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

void VtkImageGridSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	vtkImageGridSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageGridSourceWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageGridSourceWrap *w = new VtkImageGridSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageGridSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageGridSource * r;
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
			Nan::New<v8::Function>(VtkImageGridSourceWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageGridSourceWrap *w = new VtkImageGridSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGridSourceWrap::SetDataExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
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
							native->SetDataExtent(
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

void VtkImageGridSourceWrap::SetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetDataOrigin(
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

void VtkImageGridSourceWrap::SetDataScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataScalarType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGridSourceWrap::SetDataScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataScalarTypeToDouble();
}

void VtkImageGridSourceWrap::SetDataScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataScalarTypeToInt();
}

void VtkImageGridSourceWrap::SetDataScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataScalarTypeToShort();
}

void VtkImageGridSourceWrap::SetDataScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataScalarTypeToUnsignedChar();
}

void VtkImageGridSourceWrap::SetDataScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataScalarTypeToUnsignedShort();
}

void VtkImageGridSourceWrap::SetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetDataSpacing(
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

void VtkImageGridSourceWrap::SetFillValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFillValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGridSourceWrap::SetGridOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetGridOrigin(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGridSourceWrap::SetGridSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			if(info.Length() > 2 && info[2]->IsInt32())
			{
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetGridSpacing(
					info[0]->Int32Value(),
					info[1]->Int32Value(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageGridSourceWrap::SetLineValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageGridSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageGridSourceWrap>(info.Holder());
	vtkImageGridSource *native = (vtkImageGridSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLineValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

