/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkImageAlgorithmWrap.h"
#include "vtkImageEllipsoidSourceWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkImageEllipsoidSourceWrap::ptpl;

VtkImageEllipsoidSourceWrap::VtkImageEllipsoidSourceWrap()
{ }

VtkImageEllipsoidSourceWrap::VtkImageEllipsoidSourceWrap(vtkSmartPointer<vtkImageEllipsoidSource> _native)
{ native = _native; }

VtkImageEllipsoidSourceWrap::~VtkImageEllipsoidSourceWrap()
{ }

void VtkImageEllipsoidSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkImageEllipsoidSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("ImageEllipsoidSource").ToLocalChecked(), ConstructorGetter);
}

void VtkImageEllipsoidSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkImageEllipsoidSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkImageAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkImageAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkImageEllipsoidSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetCenter", GetCenter);
	Nan::SetPrototypeMethod(tpl, "getCenter", GetCenter);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetInValue", GetInValue);
	Nan::SetPrototypeMethod(tpl, "getInValue", GetInValue);

	Nan::SetPrototypeMethod(tpl, "GetOutValue", GetOutValue);
	Nan::SetPrototypeMethod(tpl, "getOutValue", GetOutValue);

	Nan::SetPrototypeMethod(tpl, "GetOutputScalarType", GetOutputScalarType);
	Nan::SetPrototypeMethod(tpl, "getOutputScalarType", GetOutputScalarType);

	Nan::SetPrototypeMethod(tpl, "GetRadius", GetRadius);
	Nan::SetPrototypeMethod(tpl, "getRadius", GetRadius);

	Nan::SetPrototypeMethod(tpl, "GetWholeExtent", GetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "getWholeExtent", GetWholeExtent);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetCenter", SetCenter);
	Nan::SetPrototypeMethod(tpl, "setCenter", SetCenter);

	Nan::SetPrototypeMethod(tpl, "SetInValue", SetInValue);
	Nan::SetPrototypeMethod(tpl, "setInValue", SetInValue);

	Nan::SetPrototypeMethod(tpl, "SetOutValue", SetOutValue);
	Nan::SetPrototypeMethod(tpl, "setOutValue", SetOutValue);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarType", SetOutputScalarType);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarType", SetOutputScalarType);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToChar", SetOutputScalarTypeToChar);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToChar", SetOutputScalarTypeToChar);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToDouble", SetOutputScalarTypeToDouble);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToDouble", SetOutputScalarTypeToDouble);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToFloat", SetOutputScalarTypeToFloat);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToFloat", SetOutputScalarTypeToFloat);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToInt", SetOutputScalarTypeToInt);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToInt", SetOutputScalarTypeToInt);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToLong", SetOutputScalarTypeToLong);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToLong", SetOutputScalarTypeToLong);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToShort", SetOutputScalarTypeToShort);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToShort", SetOutputScalarTypeToShort);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedChar", SetOutputScalarTypeToUnsignedChar);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedChar", SetOutputScalarTypeToUnsignedChar);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedInt", SetOutputScalarTypeToUnsignedInt);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedInt", SetOutputScalarTypeToUnsignedInt);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedLong", SetOutputScalarTypeToUnsignedLong);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedLong", SetOutputScalarTypeToUnsignedLong);

	Nan::SetPrototypeMethod(tpl, "SetOutputScalarTypeToUnsignedShort", SetOutputScalarTypeToUnsignedShort);
	Nan::SetPrototypeMethod(tpl, "setOutputScalarTypeToUnsignedShort", SetOutputScalarTypeToUnsignedShort);

	Nan::SetPrototypeMethod(tpl, "SetRadius", SetRadius);
	Nan::SetPrototypeMethod(tpl, "setRadius", SetRadius);

	Nan::SetPrototypeMethod(tpl, "SetWholeExtent", SetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setWholeExtent", SetWholeExtent);

#ifdef VTK_NODE_PLUS_VTKIMAGEELLIPSOIDSOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKIMAGEELLIPSOIDSOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkImageEllipsoidSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkImageEllipsoidSource> native = vtkSmartPointer<vtkImageEllipsoidSource>::New();
		VtkImageEllipsoidSourceWrap* obj = new VtkImageEllipsoidSourceWrap(native);
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

void VtkImageEllipsoidSourceWrap::GetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetCenter();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkImageEllipsoidSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkImageEllipsoidSourceWrap::GetInValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetInValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageEllipsoidSourceWrap::GetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageEllipsoidSourceWrap::GetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOutputScalarType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkImageEllipsoidSourceWrap::GetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRadius();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkImageEllipsoidSourceWrap::GetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
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
		native->GetWholeExtent(
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
		native->GetWholeExtent(
			b0
		);
		return;
	}
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetWholeExtent();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkImageEllipsoidSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
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

void VtkImageEllipsoidSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
	vtkImageEllipsoidSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkImageEllipsoidSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkImageEllipsoidSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkImageEllipsoidSourceWrap *w = new VtkImageEllipsoidSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkImageEllipsoidSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkImageEllipsoidSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkImageEllipsoidSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkImageEllipsoidSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkImageEllipsoidSourceWrap *w = new VtkImageEllipsoidSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageEllipsoidSourceWrap::SetCenter(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
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
		native->SetCenter(
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
		native->SetCenter(
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
				native->SetCenter(
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

void VtkImageEllipsoidSourceWrap::SetInValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetInValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageEllipsoidSourceWrap::SetOutValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutValue(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageEllipsoidSourceWrap::SetOutputScalarType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetOutputScalarType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkImageEllipsoidSourceWrap::SetOutputScalarTypeToChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToChar();
}

void VtkImageEllipsoidSourceWrap::SetOutputScalarTypeToDouble(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToDouble();
}

void VtkImageEllipsoidSourceWrap::SetOutputScalarTypeToFloat(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToFloat();
}

void VtkImageEllipsoidSourceWrap::SetOutputScalarTypeToInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToInt();
}

void VtkImageEllipsoidSourceWrap::SetOutputScalarTypeToLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToLong();
}

void VtkImageEllipsoidSourceWrap::SetOutputScalarTypeToShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToShort();
}

void VtkImageEllipsoidSourceWrap::SetOutputScalarTypeToUnsignedChar(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedChar();
}

void VtkImageEllipsoidSourceWrap::SetOutputScalarTypeToUnsignedInt(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedInt();
}

void VtkImageEllipsoidSourceWrap::SetOutputScalarTypeToUnsignedLong(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedLong();
}

void VtkImageEllipsoidSourceWrap::SetOutputScalarTypeToUnsignedShort(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetOutputScalarTypeToUnsignedShort();
}

void VtkImageEllipsoidSourceWrap::SetRadius(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
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
		native->SetRadius(
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
		native->SetRadius(
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
				native->SetRadius(
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

void VtkImageEllipsoidSourceWrap::SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkImageEllipsoidSourceWrap *wrapper = ObjectWrap::Unwrap<VtkImageEllipsoidSourceWrap>(info.Holder());
	vtkImageEllipsoidSource *native = (vtkImageEllipsoidSource *)wrapper->native.GetPointer();
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
		native->SetWholeExtent(
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
		native->SetWholeExtent(
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

