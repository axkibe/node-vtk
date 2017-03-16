/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkObjectWrap.h"
#include "vtkPoints2DWrap.h"
#include "vtkDataArrayWrap.h"
#include "vtkIdListWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkPoints2DWrap::ptpl;

VtkPoints2DWrap::VtkPoints2DWrap()
{ }

VtkPoints2DWrap::VtkPoints2DWrap(vtkSmartPointer<vtkPoints2D> _native)
{ native = _native; }

VtkPoints2DWrap::~VtkPoints2DWrap()
{ }

void VtkPoints2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkPoints2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("Points2D").ToLocalChecked(), ConstructorGetter);
}

void VtkPoints2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkPoints2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkPoints2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeBounds", ComputeBounds);
	Nan::SetPrototypeMethod(tpl, "computeBounds", ComputeBounds);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetActualMemorySize", GetActualMemorySize);
	Nan::SetPrototypeMethod(tpl, "getActualMemorySize", GetActualMemorySize);

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

#ifdef VTK_NODE_PLUS_VTKPOINTS2DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKPOINTS2DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkPoints2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkPoints2D> native = vtkSmartPointer<vtkPoints2D>::New();
		VtkPoints2DWrap* obj = new VtkPoints2DWrap(native);
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

void VtkPoints2DWrap::ComputeBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeBounds();
}

void VtkPoints2DWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPoints2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPoints2DWrap *a0 = ObjectWrap::Unwrap<VtkPoints2DWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkPoints2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPoints2DWrap::GetActualMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActualMemorySize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPoints2DWrap::GetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 4 )
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
		double b0[4];
		if( a0->Length() < 4 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 4; i++ )
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
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 4 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 4);
	memcpy(ab->GetContents().Data(), r, 4 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkPoints2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkPoints2DWrap::GetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
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

void VtkPoints2DWrap::GetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDataType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkPoints2DWrap::GetPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkIdListWrap::ptpl))->HasInstance(info[0]))
	{
		VtkIdListWrap *a0 = ObjectWrap::Unwrap<VtkIdListWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkPoints2DWrap::ptpl))->HasInstance(info[1]))
		{
			VtkPoints2DWrap *a1 = ObjectWrap::Unwrap<VtkPoints2DWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->GetPoints(
				(vtkIdList *) a0->native.GetPointer(),
				(vtkPoints2D *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPoints2DWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkPoints2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
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

void VtkPoints2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
	vtkPoints2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkPoints2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkPoints2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkPoints2DWrap *w = new VtkPoints2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkPoints2DWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkPoints2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkPoints2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkPoints2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkPoints2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkPoints2DWrap *w = new VtkPoints2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPoints2DWrap::SetData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
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

void VtkPoints2DWrap::SetDataType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
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

void VtkPoints2DWrap::SetDataTypeToBit(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToBit();
}

void VtkPoints2DWrap::SetDataTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToChar();
}

void VtkPoints2DWrap::SetDataTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToDouble();
}

void VtkPoints2DWrap::SetDataTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToFloat();
}

void VtkPoints2DWrap::SetDataTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToInt();
}

void VtkPoints2DWrap::SetDataTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToLong();
}

void VtkPoints2DWrap::SetDataTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToShort();
}

void VtkPoints2DWrap::SetDataTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToUnsignedChar();
}

void VtkPoints2DWrap::SetDataTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToUnsignedInt();
}

void VtkPoints2DWrap::SetDataTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToUnsignedLong();
}

void VtkPoints2DWrap::SetDataTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetDataTypeToUnsignedShort();
}

void VtkPoints2DWrap::ShallowCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkPoints2DWrap::ptpl))->HasInstance(info[0]))
	{
		VtkPoints2DWrap *a0 = ObjectWrap::Unwrap<VtkPoints2DWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->ShallowCopy(
			(vtkPoints2D *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkPoints2DWrap::Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkPoints2DWrap *wrapper = ObjectWrap::Unwrap<VtkPoints2DWrap>(info.Holder());
	vtkPoints2D *native = (vtkPoints2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Squeeze();
}

