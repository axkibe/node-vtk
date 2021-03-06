/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkAbstractArrayWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkIdListWrap.h"
#include "vtkVariantArrayWrap.h"
#include "vtkInformationWrap.h"
#include "vtkInformationIntegerKeyWrap.h"
#include "vtkInformationInformationVectorKeyWrap.h"
#include "vtkInformationVariantVectorKeyWrap.h"
#include "vtkInformationDoubleVectorKeyWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAbstractArrayWrap::ptpl;

VtkAbstractArrayWrap::VtkAbstractArrayWrap()
{ }

VtkAbstractArrayWrap::VtkAbstractArrayWrap(vtkSmartPointer<vtkAbstractArray> _native)
{ native = _native; }

VtkAbstractArrayWrap::~VtkAbstractArrayWrap()
{ }

void VtkAbstractArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAbstractArray").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AbstractArray").ToLocalChecked(), ConstructorGetter);
}

void VtkAbstractArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAbstractArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAbstractArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "CopyComponentNames", CopyComponentNames);
	Nan::SetPrototypeMethod(tpl, "copyComponentNames", CopyComponentNames);

	Nan::SetPrototypeMethod(tpl, "CopyInformation", CopyInformation);
	Nan::SetPrototypeMethod(tpl, "copyInformation", CopyInformation);

	Nan::SetPrototypeMethod(tpl, "CreateArray", CreateArray);
	Nan::SetPrototypeMethod(tpl, "createArray", CreateArray);

	Nan::SetPrototypeMethod(tpl, "DISCRETE_VALUES", DISCRETE_VALUES);

	Nan::SetPrototypeMethod(tpl, "DISCRETE_VALUE_SAMPLE_PARAMETERS", DISCRETE_VALUE_SAMPLE_PARAMETERS);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GUI_HIDE", GUI_HIDE);

	Nan::SetPrototypeMethod(tpl, "GetArrayType", GetArrayType);
	Nan::SetPrototypeMethod(tpl, "getArrayType", GetArrayType);

	Nan::SetPrototypeMethod(tpl, "GetDataTypeAsString", GetDataTypeAsString);
	Nan::SetPrototypeMethod(tpl, "getDataTypeAsString", GetDataTypeAsString);

	Nan::SetPrototypeMethod(tpl, "GetDataTypeSize", GetDataTypeSize);
	Nan::SetPrototypeMethod(tpl, "getDataTypeSize", GetDataTypeSize);

	Nan::SetPrototypeMethod(tpl, "GetInformation", GetInformation);
	Nan::SetPrototypeMethod(tpl, "getInformation", GetInformation);

	Nan::SetPrototypeMethod(tpl, "GetMaxDiscreteValues", GetMaxDiscreteValues);
	Nan::SetPrototypeMethod(tpl, "getMaxDiscreteValues", GetMaxDiscreteValues);

	Nan::SetPrototypeMethod(tpl, "GetName", GetName);
	Nan::SetPrototypeMethod(tpl, "getName", GetName);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfComponents", GetNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "getNumberOfComponents", GetNumberOfComponents);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfComponentsMaxValue", GetNumberOfComponentsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfComponentsMaxValue", GetNumberOfComponentsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfComponentsMinValue", GetNumberOfComponentsMinValue);
	Nan::SetPrototypeMethod(tpl, "getNumberOfComponentsMinValue", GetNumberOfComponentsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetProminentComponentValues", GetProminentComponentValues);
	Nan::SetPrototypeMethod(tpl, "getProminentComponentValues", GetProminentComponentValues);

	Nan::SetPrototypeMethod(tpl, "GetTuples", GetTuples);
	Nan::SetPrototypeMethod(tpl, "getTuples", GetTuples);

	Nan::SetPrototypeMethod(tpl, "HasAComponentName", HasAComponentName);
	Nan::SetPrototypeMethod(tpl, "hasAComponentName", HasAComponentName);

	Nan::SetPrototypeMethod(tpl, "HasInformation", HasInformation);
	Nan::SetPrototypeMethod(tpl, "hasInformation", HasInformation);

	Nan::SetPrototypeMethod(tpl, "HasStandardMemoryLayout", HasStandardMemoryLayout);
	Nan::SetPrototypeMethod(tpl, "hasStandardMemoryLayout", HasStandardMemoryLayout);

	Nan::SetPrototypeMethod(tpl, "Modified", Modified);
	Nan::SetPrototypeMethod(tpl, "modified", Modified);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PER_COMPONENT", PER_COMPONENT);

	Nan::SetPrototypeMethod(tpl, "PER_FINITE_COMPONENT", PER_FINITE_COMPONENT);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetMaxDiscreteValues", SetMaxDiscreteValues);
	Nan::SetPrototypeMethod(tpl, "setMaxDiscreteValues", SetMaxDiscreteValues);

	Nan::SetPrototypeMethod(tpl, "SetName", SetName);
	Nan::SetPrototypeMethod(tpl, "setName", SetName);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfComponents", SetNumberOfComponents);
	Nan::SetPrototypeMethod(tpl, "setNumberOfComponents", SetNumberOfComponents);

#ifdef VTK_NODE_PLUS_VTKABSTRACTARRAYWRAP_INITPTPL
	VTK_NODE_PLUS_VTKABSTRACTARRAYWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkAbstractArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkAbstractArrayWrap::CopyComponentNames(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CopyComponentNames(
			(vtkAbstractArray *) a0->native.GetPointer()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractArrayWrap::CopyInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[0]))
	{
		VtkInformationWrap *a0 = ObjectWrap::Unwrap<VtkInformationWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->CopyInformation(
				(vtkInformation *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractArrayWrap::CreateArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkAbstractArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CreateArray(
			info[0]->Int32Value()
		);
		VtkAbstractArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractArrayWrap *w = new VtkAbstractArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractArrayWrap::DISCRETE_VALUES(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	vtkInformationVariantVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DISCRETE_VALUES();
	VtkInformationVariantVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationVariantVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationVariantVectorKeyWrap *w = new VtkInformationVariantVectorKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractArrayWrap::DISCRETE_VALUE_SAMPLE_PARAMETERS(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	vtkInformationDoubleVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->DISCRETE_VALUE_SAMPLE_PARAMETERS();
	VtkInformationDoubleVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationDoubleVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationDoubleVectorKeyWrap *w = new VtkInformationDoubleVectorKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractArrayWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkAbstractArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractArrayWrap::GUI_HIDE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	vtkInformationIntegerKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GUI_HIDE();
	VtkInformationIntegerKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationIntegerKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationIntegerKeyWrap *w = new VtkInformationIntegerKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractArrayWrap::GetArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractArrayWrap::GetDataTypeAsString(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeAsString();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractArrayWrap::GetDataTypeSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetDataTypeSize(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractArrayWrap::GetInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	vtkInformation * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInformation();
	VtkInformationWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationWrap *w = new VtkInformationWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractArrayWrap::GetMaxDiscreteValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxDiscreteValues();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractArrayWrap::GetName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAbstractArrayWrap::GetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfComponents();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractArrayWrap::GetNumberOfComponentsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfComponentsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractArrayWrap::GetNumberOfComponentsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfComponentsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractArrayWrap::GetProminentComponentValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkVariantArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkVariantArrayWrap *a1 = ObjectWrap::Unwrap<VtkVariantArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->GetProminentComponentValues(
						info[0]->Int32Value(),
						(vtkVariantArray *) a1->native.GetPointer(),
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

void VtkAbstractArrayWrap::GetTuples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkAbstractArrayWrap *a1 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetTuples(
				(vtkIdList *) a0->native.GetPointer(),
				(vtkAbstractArray *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractArrayWrap::HasAComponentName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasAComponentName();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractArrayWrap::HasInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasInformation();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractArrayWrap::HasStandardMemoryLayout(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->HasStandardMemoryLayout();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAbstractArrayWrap::Modified(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Modified();
}

void VtkAbstractArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	vtkAbstractArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkAbstractArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractArrayWrap *w = new VtkAbstractArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractArrayWrap::PER_COMPONENT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	vtkInformationInformationVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->PER_COMPONENT();
	VtkInformationInformationVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationInformationVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationInformationVectorKeyWrap *w = new VtkInformationInformationVectorKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractArrayWrap::PER_FINITE_COMPONENT(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	vtkInformationInformationVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->PER_FINITE_COMPONENT();
	VtkInformationInformationVectorKeyWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkInformationInformationVectorKeyWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkInformationInformationVectorKeyWrap *w = new VtkInformationInformationVectorKeyWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAbstractArrayWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkAbstractArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkAbstractArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkAbstractArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAbstractArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAbstractArrayWrap *w = new VtkAbstractArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractArrayWrap::SetMaxDiscreteValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxDiscreteValues(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractArrayWrap::SetName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAbstractArrayWrap::SetNumberOfComponents(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAbstractArrayWrap *wrapper = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info.Holder());
	vtkAbstractArray *native = (vtkAbstractArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfComponents(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

