/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkPointsWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkIdListWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPointsWrap::ptpl;

VtkPointsWrap::VtkPointsWrap()
{ }

VtkPointsWrap::VtkPointsWrap(vtkSmartPointer<vtkPoints> _native)
{ native = _native; }

VtkPointsWrap::~VtkPointsWrap()
{ }

void VtkPointsWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPoints").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Points").ToLocalChecked(), ConstructorGetter);
}

void VtkPointsWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPointsWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPointsWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeBounds", ComputeBounds);
	Nan::SetPrototypeMethod(tpl, "computeBounds", ComputeBounds);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetBounds", GetBounds);
	Nan::SetPrototypeMethod(tpl, "getBounds", GetBounds);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetData", GetData);
	Nan::SetPrototypeMethod(tpl, "getData", GetData);

	Nan::SetPrototypeMethod(tpl, "GetDataType", GetDataType);
	Nan::SetPrototypeMethod(tpl, "getDataType", GetDataType);

	Nan::SetPrototypeMethod(tpl, "GetPoints", GetPoints);
	Nan::SetPrototypeMethod(tpl, "getPoints", GetPoints);

	Nan::SetPrototypeMethod(tpl, "Initialize", Initialize);
	Nan::SetPrototypeMethod(tpl, "initialize", Initialize);

	Nan::SetPrototypeMethod(tpl, "InsertPoints", InsertPoints);
	Nan::SetPrototypeMethod(tpl, "insertPoints", InsertPoints);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Reset", Reset);
	Nan::SetPrototypeMethod(tpl, "reset", Reset);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetData", SetData);
	Nan::SetPrototypeMethod(tpl, "setData", SetData);

	Nan::SetPrototypeMethod(tpl, "SetDataType", SetDataType);
	Nan::SetPrototypeMethod(tpl, "setDataType", SetDataType);

	Nan::SetPrototypeMethod(tpl, "SetDataTypeToBit", SetDataTypeToBit);
	Nan::SetPrototypeMethod(tpl, "setDataTypeToBit", SetDataTypeToBit);

	Nan::SetPrototypeMethod(tpl, "SetDataTypeToChar", SetDataTypeToChar);
	Nan::SetPrototypeMethod(tpl, "setDataTypeToChar", SetDataTypeToChar);

	Nan::SetPrototypeMethod(tpl, "SetDataTypeToDouble", SetDataTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setDataTypeToDouble", SetDataTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetDataTypeToFloat", SetDataTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setDataTypeToFloat", SetDataTypeToFloat);

	Nan::SetPrototypeMethod(tpl, "SetDataTypeToInt", SetDataTypeToInt);
	Nan::SetPrototypeMethod(tpl, "setDataTypeToInt", SetDataTypeToInt);

	Nan::SetPrototypeMethod(tpl, "SetDataTypeToLong", SetDataTypeToLong);
	Nan::SetPrototypeMethod(tpl, "setDataTypeToLong", SetDataTypeToLong);

	Nan::SetPrototypeMethod(tpl, "SetDataTypeToShort", SetDataTypeToShort);
	Nan::SetPrototypeMethod(tpl, "setDataTypeToShort", SetDataTypeToShort);

	Nan::SetPrototypeMethod(tpl, "SetDataTypeToUnsignedChar", SetDataTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setDataTypeToUnsignedChar", SetDataTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetDataTypeToUnsignedInt", SetDataTypeToUnsignedInt);
	Nan::SetPrototypeMethod(tpl, "setDataTypeToUnsignedInt", SetDataTypeToUnsignedInt);

	Nan::SetPrototypeMethod(tpl, "SetDataTypeToUnsignedLong", SetDataTypeToUnsignedLong);
	Nan::SetPrototypeMethod(tpl, "setDataTypeToUnsignedLong", SetDataTypeToUnsignedLong);

	Nan::SetPrototypeMethod(tpl, "SetDataTypeToUnsignedShort", SetDataTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setDataTypeToUnsignedShort", SetDataTypeToUnsignedShort);

	Nan::SetPrototypeMethod(tpl, "ShallowCopy", ShallowCopy);
	Nan::SetPrototypeMethod(tpl, "shallowCopy", ShallowCopy);

	Nan::SetPrototypeMethod(tpl, "Squeeze", Squeeze);
	Nan::SetPrototypeMethod(tpl, "squeeze", Squeeze);

#ifdef VTK_NODE_PLUS_VTKPOINTSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOINTSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPointsWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPoints> native = vtkSmartPointer<vtkPoints>::New();
		VtkPointsWrap* obj = new VtkPointsWrap(native);
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

void VtkPointsWrap::ComputeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeBounds();
}

void VtkPointsWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointsWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
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
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->GetBounds(
			b0
		);
		return;
	}
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBounds();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkPointsWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPointsWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
	vtkDataArray * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetData();
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

void VtkPointsWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPointsWrap::GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPointsWrap *a1 = ObjectWrap::Unwrap<VtkPointsWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetPoints(
				(vtkIdList *) a0->native.GetPointer(),
				(vtkPoints *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointsWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkPointsWrap::InsertPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[1]))
		{
			VtkIdListWrap *a1 = ObjectWrap::Unwrap<VtkIdListWrap>(info[1]->ToObject());
			if(info.Length() > 2 && info[2]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[2]))
			{
				VtkPointsWrap *a2 = ObjectWrap::Unwrap<VtkPointsWrap>(info[2]->ToObject());
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->InsertPoints(
					(vtkIdList *) a0->native.GetPointer(),
					(vtkIdList *) a1->native.GetPointer(),
					(vtkPoints *) a2->native.GetPointer()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointsWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
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

void VtkPointsWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
	vtkPoints * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPointsWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPointsWrap *w = new VtkPointsWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPointsWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkPointsWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPoints * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkPointsWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPointsWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPointsWrap *w = new VtkPointsWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointsWrap::SetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataArrayWrap *a0 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetData(
			(vtkDataArray *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointsWrap::SetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDataType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointsWrap::SetDataTypeToBit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToBit();
}

void VtkPointsWrap::SetDataTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToChar();
}

void VtkPointsWrap::SetDataTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToDouble();
}

void VtkPointsWrap::SetDataTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToFloat();
}

void VtkPointsWrap::SetDataTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToInt();
}

void VtkPointsWrap::SetDataTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToLong();
}

void VtkPointsWrap::SetDataTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToShort();
}

void VtkPointsWrap::SetDataTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToUnsignedChar();
}

void VtkPointsWrap::SetDataTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToUnsignedInt();
}

void VtkPointsWrap::SetDataTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToUnsignedLong();
}

void VtkPointsWrap::SetDataTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToUnsignedShort();
}

void VtkPointsWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPointsWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPointsWrap *a0 = ObjectWrap::Unwrap<VtkPointsWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkPoints *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPointsWrap::Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPointsWrap *wrapper = ObjectWrap::Unwrap<VtkPointsWrap>(info.Holder());
	vtkPoints *native = (vtkPoints *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Squeeze();
}

