/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkImageAlgorithmWrap.h"
#include "vtkImageImportWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkImageImportWrap::constructor;

VtkImageImportWrap::VtkImageImportWrap()
{ }

VtkImageImportWrap::VtkImageImportWrap(vtkSmartPointer<vtkImageImport> _native)
{ native = _native; }

VtkImageImportWrap::~VtkImageImportWrap()
{ }

void VtkImageImportWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkImageImportWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	VtkAlgorithmWrap::InitTpl(tpl);
	VtkImageAlgorithmWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkImageImport").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("ImageImport").ToLocalChecked(),tpl->GetFunction());
}

void VtkImageImportWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataScalarType", GetDataScalarType);
	Nan::SetPrototypeMethod(tpl, "getDataScalarType", GetDataScalarType);

	Nan::SetPrototypeMethod(tpl, "GetDataScalarTypeAsString", GetDataScalarTypeAsString);
	Nan::SetPrototypeMethod(tpl, "getDataScalarTypeAsString", GetDataScalarTypeAsString);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfScalarComponents", GetNumberOfScalarComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfScalarComponents", GetNumberOfScalarComponents);

	Nan::SetPrototypeMethod(tpl, "GetScalarArrayName", GetScalarArrayName);
	Nan::SetPrototypeMethod(tpl, "getScalarArrayName", GetScalarArrayName);

	Nan::SetPrototypeMethod(tpl, "InvokeExecuteDataCallbacks", InvokeExecuteDataCallbacks);
	Nan::SetPrototypeMethod(tpl, "invokeExecuteDataCallbacks", InvokeExecuteDataCallbacks);

	Nan::SetPrototypeMethod(tpl, "InvokeExecuteInformationCallbacks", InvokeExecuteInformationCallbacks);
	Nan::SetPrototypeMethod(tpl, "invokeExecuteInformationCallbacks", InvokeExecuteInformationCallbacks);

	Nan::SetPrototypeMethod(tpl, "InvokePipelineModifiedCallbacks", InvokePipelineModifiedCallbacks);
	Nan::SetPrototypeMethod(tpl, "invokePipelineModifiedCallbacks", InvokePipelineModifiedCallbacks);

	Nan::SetPrototypeMethod(tpl, "InvokeUpdateInformationCallbacks", InvokeUpdateInformationCallbacks);
	Nan::SetPrototypeMethod(tpl, "invokeUpdateInformationCallbacks", InvokeUpdateInformationCallbacks);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "LegacyCheckWholeExtent", LegacyCheckWholeExtent);
	Nan::SetPrototypeMethod(tpl, "legacyCheckWholeExtent", LegacyCheckWholeExtent);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDataExtent", SetDataExtent);
	Nan::SetPrototypeMethod(tpl, "setDataExtent", SetDataExtent);

	Nan::SetPrototypeMethod(tpl, "SetDataExtentToWholeExtent", SetDataExtentToWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setDataExtentToWholeExtent", SetDataExtentToWholeExtent);

	Nan::SetPrototypeMethod(tpl, "SetDataOrigin", SetDataOrigin);
	Nan::SetPrototypeMethod(tpl, "setDataOrigin", SetDataOrigin);

	Nan::SetPrototypeMethod(tpl, "SetDataScalarType", SetDataScalarType);
	Nan::SetPrototypeMethod(tpl, "setDataScalarType", SetDataScalarType);

	Nan::SetPrototypeMethod(tpl, "SetDataScalarTypeToDouble", SetDataScalarTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setDataScalarTypeToDouble", SetDataScalarTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetDataScalarTypeToFloat", SetDataScalarTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setDataScalarTypeToFloat", SetDataScalarTypeToFloat);

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

	Nan::SetPrototypeMethod(tpl, "SetNumberOfScalarComponents", SetNumberOfScalarComponents);
	Nan::SetPrototypeMethod(tpl, "setNumberOfScalarComponents", SetNumberOfScalarComponents);

	Nan::SetPrototypeMethod(tpl, "SetScalarArrayName", SetScalarArrayName);
	Nan::SetPrototypeMethod(tpl, "setScalarArrayName", SetScalarArrayName);

	Nan::SetPrototypeMethod(tpl, "SetWholeExtent", SetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setWholeExtent", SetWholeExtent);

}

void VtkImageImportWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageImport> native = vtkSmartPointer<vtkImageImport>::New();
		VtkImageImportWrap* obj = new VtkImageImportWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkImageImportWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageImportWrap::GetDataScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageImportWrap::GetDataScalarTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataScalarTypeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageImportWrap::GetNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfScalarComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageImportWrap::GetScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetScalarArrayName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageImportWrap::InvokeExecuteDataCallbacks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InvokeExecuteDataCallbacks();
}

void VtkImageImportWrap::InvokeExecuteInformationCallbacks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InvokeExecuteInformationCallbacks();
}

void VtkImageImportWrap::InvokePipelineModifiedCallbacks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->InvokePipelineModifiedCallbacks();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageImportWrap::InvokeUpdateInformationCallbacks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->InvokeUpdateInformationCallbacks();
}

void VtkImageImportWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
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

void VtkImageImportWrap::LegacyCheckWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->LegacyCheckWholeExtent();
}

void VtkImageImportWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	vtkImageImport * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkImageImportWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageImportWrap *w = new VtkImageImportWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageImportWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageImport * r;
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
			Nan::New<v8::Function>(VtkImageImportWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageImportWrap *w = new VtkImageImportWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageImportWrap::SetDataExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
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

void VtkImageImportWrap::SetDataExtentToWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataExtentToWholeExtent();
}

void VtkImageImportWrap::SetDataOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
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

void VtkImageImportWrap::SetDataScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
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

void VtkImageImportWrap::SetDataScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataScalarTypeToDouble();
}

void VtkImageImportWrap::SetDataScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataScalarTypeToFloat();
}

void VtkImageImportWrap::SetDataScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataScalarTypeToInt();
}

void VtkImageImportWrap::SetDataScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataScalarTypeToShort();
}

void VtkImageImportWrap::SetDataScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataScalarTypeToUnsignedChar();
}

void VtkImageImportWrap::SetDataScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataScalarTypeToUnsignedShort();
}

void VtkImageImportWrap::SetDataSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
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

void VtkImageImportWrap::SetNumberOfScalarComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfScalarComponents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageImportWrap::SetScalarArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetScalarArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageImportWrap::SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageImportWrap *wrapper = ObjectWrap::Unwrap<VtkImageImportWrap>(info.Holder());
	vtkImageImport *native = (vtkImageImport *)wrapper->native.GetPointer();
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
							native->SetWholeExtent(
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

