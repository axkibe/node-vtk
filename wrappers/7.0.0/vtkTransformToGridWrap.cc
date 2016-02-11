/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAlgorithmWrap.h"
#include "vtkTransformToGridWrap.h"
#include "vtkObjectWrap.h"
#include "vtkAbstractTransformWrap.h"
#include "vtkImageDataWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTransformToGridWrap::ptpl;

VtkTransformToGridWrap::VtkTransformToGridWrap()
{ }

VtkTransformToGridWrap::VtkTransformToGridWrap(vtkSmartPointer<vtkTransformToGrid> _native)
{ native = _native; }

VtkTransformToGridWrap::~VtkTransformToGridWrap()
{ }

void VtkTransformToGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTransformToGrid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TransformToGrid").ToLocalChecked(), ConstructorGetter);
}

void VtkTransformToGridWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTransformToGridWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTransformToGridWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDisplacementScale", GetDisplacementScale);
	Nan::SetPrototypeMethod(tpl, "getDisplacementScale", GetDisplacementScale);

	Nan::SetPrototypeMethod(tpl, "GetDisplacementShift", GetDisplacementShift);
	Nan::SetPrototypeMethod(tpl, "getDisplacementShift", GetDisplacementShift);

	Nan::SetPrototypeMethod(tpl, "GetGridExtent", GetGridExtent);
	Nan::SetPrototypeMethod(tpl, "getGridExtent", GetGridExtent);

	Nan::SetPrototypeMethod(tpl, "GetGridOrigin", GetGridOrigin);
	Nan::SetPrototypeMethod(tpl, "getGridOrigin", GetGridOrigin);

	Nan::SetPrototypeMethod(tpl, "GetGridScalarType", GetGridScalarType);
	Nan::SetPrototypeMethod(tpl, "getGridScalarType", GetGridScalarType);

	Nan::SetPrototypeMethod(tpl, "GetGridSpacing", GetGridSpacing);
	Nan::SetPrototypeMethod(tpl, "getGridSpacing", GetGridSpacing);

	Nan::SetPrototypeMethod(tpl, "GetInput", GetInput);
	Nan::SetPrototypeMethod(tpl, "getInput", GetInput);

	Nan::SetPrototypeMethod(tpl, "GetOutput", GetOutput);
	Nan::SetPrototypeMethod(tpl, "getOutput", GetOutput);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetGridExtent", SetGridExtent);
	Nan::SetPrototypeMethod(tpl, "setGridExtent", SetGridExtent);

	Nan::SetPrototypeMethod(tpl, "SetGridOrigin", SetGridOrigin);
	Nan::SetPrototypeMethod(tpl, "setGridOrigin", SetGridOrigin);

	Nan::SetPrototypeMethod(tpl, "SetGridScalarType", SetGridScalarType);
	Nan::SetPrototypeMethod(tpl, "setGridScalarType", SetGridScalarType);

	Nan::SetPrototypeMethod(tpl, "SetGridScalarTypeToChar", SetGridScalarTypeToChar);
	Nan::SetPrototypeMethod(tpl, "setGridScalarTypeToChar", SetGridScalarTypeToChar);

	Nan::SetPrototypeMethod(tpl, "SetGridScalarTypeToDouble", SetGridScalarTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setGridScalarTypeToDouble", SetGridScalarTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetGridScalarTypeToFloat", SetGridScalarTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setGridScalarTypeToFloat", SetGridScalarTypeToFloat);

	Nan::SetPrototypeMethod(tpl, "SetGridScalarTypeToShort", SetGridScalarTypeToShort);
	Nan::SetPrototypeMethod(tpl, "setGridScalarTypeToShort", SetGridScalarTypeToShort);

	Nan::SetPrototypeMethod(tpl, "SetGridScalarTypeToUnsignedChar", SetGridScalarTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setGridScalarTypeToUnsignedChar", SetGridScalarTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetGridScalarTypeToUnsignedShort", SetGridScalarTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setGridScalarTypeToUnsignedShort", SetGridScalarTypeToUnsignedShort);

	Nan::SetPrototypeMethod(tpl, "SetGridSpacing", SetGridSpacing);
	Nan::SetPrototypeMethod(tpl, "setGridSpacing", SetGridSpacing);

	Nan::SetPrototypeMethod(tpl, "SetInput", SetInput);
	Nan::SetPrototypeMethod(tpl, "setInput", SetInput);

	ptpl.Reset( tpl );
}

void VtkTransformToGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTransformToGrid> native = vtkSmartPointer<vtkTransformToGrid>::New();
		VtkTransformToGridWrap* obj = new VtkTransformToGridWrap(native);
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

void VtkTransformToGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransformToGridWrap::GetDisplacementScale(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplacementScale();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformToGridWrap::GetDisplacementShift(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDisplacementShift();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformToGridWrap::GetGridExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGridExtent();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkTransformToGridWrap::GetGridOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGridOrigin();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkTransformToGridWrap::GetGridScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGridScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransformToGridWrap::GetGridSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGridSpacing();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkTransformToGridWrap::GetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	vtkAbstractTransform * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInput();
	VtkAbstractTransformWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAbstractTransformWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAbstractTransformWrap *w = new VtkAbstractTransformWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformToGridWrap::GetOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	vtkImageData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutput();
	VtkImageDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageDataWrap *w = new VtkImageDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformToGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
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

void VtkTransformToGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	vtkTransformToGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTransformToGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransformToGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransformToGridWrap *w = new VtkTransformToGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransformToGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTransformToGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTransformToGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTransformToGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTransformToGridWrap *w = new VtkTransformToGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformToGridWrap::SetGridExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
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
		native->SetGridExtent(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[6];
		if( a0->Length() < 6 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 6; i++ )
		{
			if( !a0->Get(i)->IsInt32() )
			{
				Nan::ThrowError("Array contents invalid.");
				return;
			}
			b0[i] = a0->Get(i)->Int32Value();
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGridExtent(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsInt32())
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
							native->SetGridExtent(
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

void VtkTransformToGridWrap::SetGridOrigin(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGridOrigin(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetGridOrigin(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetGridOrigin(
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

void VtkTransformToGridWrap::SetGridScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGridScalarType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransformToGridWrap::SetGridScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGridScalarTypeToChar();
}

void VtkTransformToGridWrap::SetGridScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGridScalarTypeToDouble();
}

void VtkTransformToGridWrap::SetGridScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGridScalarTypeToFloat();
}

void VtkTransformToGridWrap::SetGridScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGridScalarTypeToShort();
}

void VtkTransformToGridWrap::SetGridScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGridScalarTypeToUnsignedChar();
}

void VtkTransformToGridWrap::SetGridScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetGridScalarTypeToUnsignedShort();
}

void VtkTransformToGridWrap::SetGridSpacing(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsFloat64Array())
	{
		v8::Local<v8::Float64Array>a0(v8::Local<v8::Float64Array>::Cast(info[0]->ToObject()));
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGridSpacing(
			(double *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		double b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetGridSpacing(
			b0
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetGridSpacing(
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

void VtkTransformToGridWrap::SetInput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransformToGridWrap *wrapper = ObjectWrap::Unwrap<VtkTransformToGridWrap>(info.Holder());
	vtkTransformToGrid *native = (vtkTransformToGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAbstractTransformWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAbstractTransformWrap *a0 = ObjectWrap::Unwrap<VtkAbstractTransformWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInput(
			(vtkAbstractTransform *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

