/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAbstractArrayWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkObjectWrap.h"
#include "vtkIdListWrap.h"
#include "vtkLookupTableWrap.h"
#include "vtkInformationDoubleVectorKeyWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDataArrayWrap::ptpl;

VtkDataArrayWrap::VtkDataArrayWrap()
{ }

VtkDataArrayWrap::VtkDataArrayWrap(vtkSmartPointer<vtkDataArray> _native)
{ native = _native; }

VtkDataArrayWrap::~VtkDataArrayWrap()
{ }

void VtkDataArrayWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDataArray").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DataArray").ToLocalChecked(), ConstructorGetter);
}

void VtkDataArrayWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDataArrayWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractArrayWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractArrayWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDataArrayWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "COMPONENT_RANGE", COMPONENT_RANGE);

	Nan::SetPrototypeMethod(tpl, "CopyComponent", CopyComponent);
	Nan::SetPrototypeMethod(tpl, "copyComponent", CopyComponent);

	Nan::SetPrototypeMethod(tpl, "CopyInformation", CopyInformation);
	Nan::SetPrototypeMethod(tpl, "copyInformation", CopyInformation);

	Nan::SetPrototypeMethod(tpl, "CreateDataArray", CreateDataArray);
	Nan::SetPrototypeMethod(tpl, "createDataArray", CreateDataArray);

	Nan::SetPrototypeMethod(tpl, "CreateDefaultLookupTable", CreateDefaultLookupTable);
	Nan::SetPrototypeMethod(tpl, "createDefaultLookupTable", CreateDefaultLookupTable);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "FastDownCast", FastDownCast);
	Nan::SetPrototypeMethod(tpl, "fastDownCast", FastDownCast);

	Nan::SetPrototypeMethod(tpl, "FillComponent", FillComponent);
	Nan::SetPrototypeMethod(tpl, "fillComponent", FillComponent);

	Nan::SetPrototypeMethod(tpl, "GetArrayType", GetArrayType);
	Nan::SetPrototypeMethod(tpl, "getArrayType", GetArrayType);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDataTypeMax", GetDataTypeMax);
	Nan::SetPrototypeMethod(tpl, "getDataTypeMax", GetDataTypeMax);

	Nan::SetPrototypeMethod(tpl, "GetDataTypeMin", GetDataTypeMin);
	Nan::SetPrototypeMethod(tpl, "getDataTypeMin", GetDataTypeMin);

	Nan::SetPrototypeMethod(tpl, "GetDataTypeRange", GetDataTypeRange);
	Nan::SetPrototypeMethod(tpl, "getDataTypeRange", GetDataTypeRange);

	Nan::SetPrototypeMethod(tpl, "GetElementComponentSize", GetElementComponentSize);
	Nan::SetPrototypeMethod(tpl, "getElementComponentSize", GetElementComponentSize);

	Nan::SetPrototypeMethod(tpl, "GetLookupTable", GetLookupTable);
	Nan::SetPrototypeMethod(tpl, "getLookupTable", GetLookupTable);

	Nan::SetPrototypeMethod(tpl, "GetMaxNorm", GetMaxNorm);
	Nan::SetPrototypeMethod(tpl, "getMaxNorm", GetMaxNorm);

	Nan::SetPrototypeMethod(tpl, "GetRange", GetRange);
	Nan::SetPrototypeMethod(tpl, "getRange", GetRange);

	Nan::SetPrototypeMethod(tpl, "GetTuples", GetTuples);
	Nan::SetPrototypeMethod(tpl, "getTuples", GetTuples);

	Nan::SetPrototypeMethod(tpl, "InsertNextTuple1", InsertNextTuple1);
	Nan::SetPrototypeMethod(tpl, "insertNextTuple1", InsertNextTuple1);

	Nan::SetPrototypeMethod(tpl, "InsertNextTuple2", InsertNextTuple2);
	Nan::SetPrototypeMethod(tpl, "insertNextTuple2", InsertNextTuple2);

	Nan::SetPrototypeMethod(tpl, "InsertNextTuple3", InsertNextTuple3);
	Nan::SetPrototypeMethod(tpl, "insertNextTuple3", InsertNextTuple3);

	Nan::SetPrototypeMethod(tpl, "InsertNextTuple4", InsertNextTuple4);
	Nan::SetPrototypeMethod(tpl, "insertNextTuple4", InsertNextTuple4);

	Nan::SetPrototypeMethod(tpl, "InsertNextTuple6", InsertNextTuple6);
	Nan::SetPrototypeMethod(tpl, "insertNextTuple6", InsertNextTuple6);

	Nan::SetPrototypeMethod(tpl, "InsertNextTuple9", InsertNextTuple9);
	Nan::SetPrototypeMethod(tpl, "insertNextTuple9", InsertNextTuple9);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsNumeric", IsNumeric);
	Nan::SetPrototypeMethod(tpl, "isNumeric", IsNumeric);

	Nan::SetPrototypeMethod(tpl, "L2_NORM_RANGE", L2_NORM_RANGE);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetLookupTable", SetLookupTable);
	Nan::SetPrototypeMethod(tpl, "setLookupTable", SetLookupTable);

	ptpl.Reset( tpl );
}

void VtkDataArrayWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
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

void VtkDataArrayWrap::COMPONENT_RANGE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	vtkInformationDoubleVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->COMPONENT_RANGE();
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

void VtkDataArrayWrap::CopyComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsInt32())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->CopyComponent(
					info[0]->Int32Value(),
					(vtkDataArray *) a1->native.GetPointer(),
					info[2]->Int32Value()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArrayWrap::CopyInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
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

void VtkDataArrayWrap::CreateDataArray(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkDataArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->CreateDataArray(
			info[0]->Int32Value()
		);
		VtkDataArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataArrayWrap *w = new VtkDataArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArrayWrap::CreateDefaultLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->CreateDefaultLookupTable();
}

void VtkDataArrayWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
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

void VtkDataArrayWrap::FastDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractArrayWrap *a0 = ObjectWrap::Unwrap<VtkAbstractArrayWrap>(info[0]->ToObject());
		vtkDataArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->FastDownCast(
			(vtkAbstractArray *) a0->native.GetPointer()
		);
		VtkDataArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataArrayWrap *w = new VtkDataArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArrayWrap::FillComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->FillComponent(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArrayWrap::GetArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataArrayWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDataArrayWrap::GetDataTypeMax(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetDataTypeMax(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeMax();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataArrayWrap::GetDataTypeMin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetDataTypeMin(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataTypeMin();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataArrayWrap::GetDataTypeRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetDataTypeRange(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->GetDataTypeRange(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsFloat64Array())
		{
			v8::Local<v8::Float64Array>a1(v8::Local<v8::Float64Array>::Cast(info[1]->ToObject()));
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetDataTypeRange(
				info[0]->Int32Value(),
				(double *)(a1->Buffer()->GetContents().Data())
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsArray())
		{
			v8::Local<v8::Array>a1(v8::Local<v8::Array>::Cast(info[1]->ToObject()));
			double b1[2];
			if( a1->Length() < 2 )
			{
				Nan::ThrowError("Array too short.");
				return;
			}

			for( i = 0; i < 2; i++ )
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
			native->GetDataTypeRange(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArrayWrap::GetElementComponentSize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetElementComponentSize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataArrayWrap::GetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	vtkLookupTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLookupTable();
	VtkLookupTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkLookupTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkLookupTableWrap *w = new VtkLookupTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataArrayWrap::GetMaxNorm(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxNorm();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataArrayWrap::GetRange(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetRange(
				(double *)(a0->Buffer()->GetContents().Data()),
				info[1]->Int32Value()
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
		{
			if( !a0->Get(i)->IsNumber() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->NumberValue();
		}
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetRange(
				b0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	else if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetRange(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[2];
		if( a0->Length() < 2 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 2; i++ )
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
		native->GetRange(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
	{
		double const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetRange(
			info[0]->Int32Value()
		);
		Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
		Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
		memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
		info.GetReturnValue().Set(at);
		return;
	}
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRange();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 2 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 2);
	memcpy(ab->GetContents().Data(), r, 2 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkDataArrayWrap::GetTuples(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
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

void VtkDataArrayWrap::InsertNextTuple1(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->InsertNextTuple1(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArrayWrap::InsertNextTuple2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InsertNextTuple2(
				info[0]->NumberValue(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArrayWrap::InsertNextTuple3(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
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
				native->InsertNextTuple3(
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

void VtkDataArrayWrap::InsertNextTuple4(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->InsertNextTuple4(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
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

void VtkDataArrayWrap::InsertNextTuple6(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
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
							native->InsertNextTuple6(
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

void VtkDataArrayWrap::InsertNextTuple9(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
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
							if(info.Length() > 6 && info[6]->IsNumber())
							{
								if(info.Length() > 7 && info[7]->IsNumber())
								{
									if(info.Length() > 8 && info[8]->IsNumber())
									{
																				if(info.Length() != 9)
										{
											Nan::ThrowError("Too many parameters.");
											return;
										}
										native->InsertNextTuple9(
											info[0]->NumberValue(),
											info[1]->NumberValue(),
											info[2]->NumberValue(),
											info[3]->NumberValue(),
											info[4]->NumberValue(),
											info[5]->NumberValue(),
											info[6]->NumberValue(),
											info[7]->NumberValue(),
											info[8]->NumberValue()
										);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArrayWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
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

void VtkDataArrayWrap::IsNumeric(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsNumeric();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDataArrayWrap::L2_NORM_RANGE(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	vtkInformationDoubleVectorKey * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->L2_NORM_RANGE();
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

void VtkDataArrayWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkDataArrayWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDataArrayWrap *w = new VtkDataArrayWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDataArrayWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDataArray * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkDataArrayWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDataArrayWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDataArrayWrap *w = new VtkDataArrayWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDataArrayWrap::SetLookupTable(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDataArrayWrap *wrapper = ObjectWrap::Unwrap<VtkDataArrayWrap>(info.Holder());
	vtkDataArray *native = (vtkDataArray *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkLookupTableWrap::ptpl))->HasInstance(info[0]))
	{
		VtkLookupTableWrap *a0 = ObjectWrap::Unwrap<VtkLookupTableWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLookupTable(
			(vtkLookupTable *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

