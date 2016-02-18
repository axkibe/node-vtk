/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkHyperOctreeAlgorithmWrap.h"
#include "vtkHyperOctreeFractalSourceWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkHyperOctreeFractalSourceWrap::ptpl;

VtkHyperOctreeFractalSourceWrap::VtkHyperOctreeFractalSourceWrap()
{ }

VtkHyperOctreeFractalSourceWrap::VtkHyperOctreeFractalSourceWrap(vtkSmartPointer<vtkHyperOctreeFractalSource> _native)
{ native = _native; }

VtkHyperOctreeFractalSourceWrap::~VtkHyperOctreeFractalSourceWrap()
{ }

void VtkHyperOctreeFractalSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkHyperOctreeFractalSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("HyperOctreeFractalSource").ToLocalChecked(), ConstructorGetter);
}

void VtkHyperOctreeFractalSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkHyperOctreeFractalSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkHyperOctreeAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkHyperOctreeAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkHyperOctreeFractalSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDimension", GetDimension);
	Nan::SetPrototypeMethod(tpl, "getDimension", GetDimension);

	Nan::SetPrototypeMethod(tpl, "GetDimensionMaxValue", GetDimensionMaxValue);
	Nan::SetPrototypeMethod(tpl, "getDimensionMaxValue", GetDimensionMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetDimensionMinValue", GetDimensionMinValue);
	Nan::SetPrototypeMethod(tpl, "getDimensionMinValue", GetDimensionMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumLevel", GetMaximumLevel);
	Nan::SetPrototypeMethod(tpl, "getMaximumLevel", GetMaximumLevel);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfIterations", GetMaximumNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfIterations", GetMaximumNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfIterationsMaxValue", GetMaximumNumberOfIterationsMaxValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfIterationsMaxValue", GetMaximumNumberOfIterationsMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetMaximumNumberOfIterationsMinValue", GetMaximumNumberOfIterationsMinValue);
	Nan::SetPrototypeMethod(tpl, "getMaximumNumberOfIterationsMinValue", GetMaximumNumberOfIterationsMinValue);

	Nan::SetPrototypeMethod(tpl, "GetMinimumLevel", GetMinimumLevel);
	Nan::SetPrototypeMethod(tpl, "getMinimumLevel", GetMinimumLevel);

	Nan::SetPrototypeMethod(tpl, "GetOriginCX", GetOriginCX);
	Nan::SetPrototypeMethod(tpl, "getOriginCX", GetOriginCX);

	Nan::SetPrototypeMethod(tpl, "GetProjectionAxes", GetProjectionAxes);
	Nan::SetPrototypeMethod(tpl, "getProjectionAxes", GetProjectionAxes);

	Nan::SetPrototypeMethod(tpl, "GetSizeCX", GetSizeCX);
	Nan::SetPrototypeMethod(tpl, "getSizeCX", GetSizeCX);

	Nan::SetPrototypeMethod(tpl, "GetSpanThreshold", GetSpanThreshold);
	Nan::SetPrototypeMethod(tpl, "getSpanThreshold", GetSpanThreshold);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetDimension", SetDimension);
	Nan::SetPrototypeMethod(tpl, "setDimension", SetDimension);

	Nan::SetPrototypeMethod(tpl, "SetMaximumLevel", SetMaximumLevel);
	Nan::SetPrototypeMethod(tpl, "setMaximumLevel", SetMaximumLevel);

	Nan::SetPrototypeMethod(tpl, "SetMaximumNumberOfIterations", SetMaximumNumberOfIterations);
	Nan::SetPrototypeMethod(tpl, "setMaximumNumberOfIterations", SetMaximumNumberOfIterations);

	Nan::SetPrototypeMethod(tpl, "SetMinimumLevel", SetMinimumLevel);
	Nan::SetPrototypeMethod(tpl, "setMinimumLevel", SetMinimumLevel);

	Nan::SetPrototypeMethod(tpl, "SetOriginCX", SetOriginCX);
	Nan::SetPrototypeMethod(tpl, "setOriginCX", SetOriginCX);

	Nan::SetPrototypeMethod(tpl, "SetProjectionAxes", SetProjectionAxes);
	Nan::SetPrototypeMethod(tpl, "setProjectionAxes", SetProjectionAxes);

	Nan::SetPrototypeMethod(tpl, "SetSizeCX", SetSizeCX);
	Nan::SetPrototypeMethod(tpl, "setSizeCX", SetSizeCX);

	Nan::SetPrototypeMethod(tpl, "SetSpanThreshold", SetSpanThreshold);
	Nan::SetPrototypeMethod(tpl, "setSpanThreshold", SetSpanThreshold);

#ifdef VTK_NODE_PLUS_VTKHYPEROCTREEFRACTALSOURCEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKHYPEROCTREEFRACTALSOURCEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkHyperOctreeFractalSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkHyperOctreeFractalSource> native = vtkSmartPointer<vtkHyperOctreeFractalSource>::New();
		VtkHyperOctreeFractalSourceWrap* obj = new VtkHyperOctreeFractalSourceWrap(native);
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

void VtkHyperOctreeFractalSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkHyperOctreeFractalSourceWrap::GetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimension();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeFractalSourceWrap::GetDimensionMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeFractalSourceWrap::GetDimensionMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDimensionMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeFractalSourceWrap::GetMaximumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeFractalSourceWrap::GetMaximumNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	unsigned char r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfIterations();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeFractalSourceWrap::GetMaximumNumberOfIterationsMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	unsigned short r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfIterationsMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeFractalSourceWrap::GetMaximumNumberOfIterationsMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	unsigned short r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaximumNumberOfIterationsMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeFractalSourceWrap::GetMinimumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinimumLevel();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeFractalSourceWrap::GetOriginCX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetOriginCX();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 4 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 4);
	memcpy(ab->GetContents().Data(), r, 4 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkHyperOctreeFractalSourceWrap::GetProjectionAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetProjectionAxes();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 3 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 3);
	memcpy(ab->GetContents().Data(), r, 3 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkHyperOctreeFractalSourceWrap::GetSizeCX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	double const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSizeCX();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 4 * sizeof(double));
	Local<v8::Float64Array> at = v8::Float64Array::New(ab, 0, 4);
	memcpy(ab->GetContents().Data(), r, 4 * sizeof(double));
	info.GetReturnValue().Set(at);
}

void VtkHyperOctreeFractalSourceWrap::GetSpanThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSpanThreshold();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkHyperOctreeFractalSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
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

void VtkHyperOctreeFractalSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	vtkHyperOctreeFractalSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkHyperOctreeFractalSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkHyperOctreeFractalSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkHyperOctreeFractalSourceWrap *w = new VtkHyperOctreeFractalSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkHyperOctreeFractalSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkHyperOctreeFractalSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkHyperOctreeFractalSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkHyperOctreeFractalSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkHyperOctreeFractalSourceWrap *w = new VtkHyperOctreeFractalSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeFractalSourceWrap::SetDimension(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDimension(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeFractalSourceWrap::SetMaximumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeFractalSourceWrap::SetMaximumNumberOfIterations(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsUint32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaximumNumberOfIterations(
			info[0]->Uint32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeFractalSourceWrap::SetMinimumLevel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinimumLevel(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkHyperOctreeFractalSourceWrap::SetOriginCX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
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
		native->SetOriginCX(
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
		native->SetOriginCX(
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
				if(info.Length() > 3 && info[3]->IsNumber())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetOriginCX(
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

void VtkHyperOctreeFractalSourceWrap::SetProjectionAxes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32Array())
	{
		v8::Local<v8::Int32Array>a0(v8::Local<v8::Int32Array>::Cast(info[0]->ToObject()));
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
		native->SetProjectionAxes(
			(int *)(a0->Buffer()->GetContents().Data())
		);
		return;
	}
	else if(info.Length() > 0 && info[0]->IsArray())
	{
		v8::Local<v8::Array>a0(v8::Local<v8::Array>::Cast(info[0]->ToObject()));
		int b0[3];
		if( a0->Length() < 3 )
		{
			Nan::ThrowError("Array too short.");
			return;
		}

		for( i = 0; i < 3; i++ )
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
		native->SetProjectionAxes(
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
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->SetProjectionAxes(
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

void VtkHyperOctreeFractalSourceWrap::SetSizeCX(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
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
		native->SetSizeCX(
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
		native->SetSizeCX(
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
				if(info.Length() > 3 && info[3]->IsNumber())
				{
										if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					native->SetSizeCX(
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

void VtkHyperOctreeFractalSourceWrap::SetSpanThreshold(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkHyperOctreeFractalSourceWrap *wrapper = ObjectWrap::Unwrap<VtkHyperOctreeFractalSourceWrap>(info.Holder());
	vtkHyperOctreeFractalSource *native = (vtkHyperOctreeFractalSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSpanThreshold(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

