/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkSynchronizedTemplates2DWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkSynchronizedTemplates2DWrap::ptpl;

VtkSynchronizedTemplates2DWrap::VtkSynchronizedTemplates2DWrap()
{ }

VtkSynchronizedTemplates2DWrap::VtkSynchronizedTemplates2DWrap(vtkSmartPointer<vtkSynchronizedTemplates2D> _native)
{ native = _native; }

VtkSynchronizedTemplates2DWrap::~VtkSynchronizedTemplates2DWrap()
{ }

void VtkSynchronizedTemplates2DWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkSynchronizedTemplates2D").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("SynchronizedTemplates2D").ToLocalChecked(), ConstructorGetter);
}

void VtkSynchronizedTemplates2DWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkSynchronizedTemplates2DWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkSynchronizedTemplates2DWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "ComputeScalarsOff", ComputeScalarsOff);
	Nan::SetPrototypeMethod(tpl, "computeScalarsOff", ComputeScalarsOff);

	Nan::SetPrototypeMethod(tpl, "ComputeScalarsOn", ComputeScalarsOn);
	Nan::SetPrototypeMethod(tpl, "computeScalarsOn", ComputeScalarsOn);

	Nan::SetPrototypeMethod(tpl, "GenerateValues", GenerateValues);
	Nan::SetPrototypeMethod(tpl, "generateValues", GenerateValues);

	Nan::SetPrototypeMethod(tpl, "GetArrayComponent", GetArrayComponent);
	Nan::SetPrototypeMethod(tpl, "getArrayComponent", GetArrayComponent);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetComputeScalars", GetComputeScalars);
	Nan::SetPrototypeMethod(tpl, "getComputeScalars", GetComputeScalars);

	Nan::SetPrototypeMethod(tpl, "GetMTime", GetMTime);
	Nan::SetPrototypeMethod(tpl, "getMTime", GetMTime);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfContours", GetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "getNumberOfContours", GetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "GetValue", GetValue);
	Nan::SetPrototypeMethod(tpl, "getValue", GetValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetArrayComponent", SetArrayComponent);
	Nan::SetPrototypeMethod(tpl, "setArrayComponent", SetArrayComponent);

	Nan::SetPrototypeMethod(tpl, "SetComputeScalars", SetComputeScalars);
	Nan::SetPrototypeMethod(tpl, "setComputeScalars", SetComputeScalars);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfContours", SetNumberOfContours);
	Nan::SetPrototypeMethod(tpl, "setNumberOfContours", SetNumberOfContours);

	Nan::SetPrototypeMethod(tpl, "SetValue", SetValue);
	Nan::SetPrototypeMethod(tpl, "setValue", SetValue);

#ifdef VTK_NODE_PLUS_VTKSYNCHRONIZEDTEMPLATES2DWRAP_INITPTPL
	VTK_NODE_PLUS_VTKSYNCHRONIZEDTEMPLATES2DWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkSynchronizedTemplates2DWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkSynchronizedTemplates2D> native = vtkSmartPointer<vtkSynchronizedTemplates2D>::New();
		VtkSynchronizedTemplates2DWrap* obj = new VtkSynchronizedTemplates2DWrap(native);
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

void VtkSynchronizedTemplates2DWrap::ComputeScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOff();
}

void VtkSynchronizedTemplates2DWrap::ComputeScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->ComputeScalarsOn();
}

void VtkSynchronizedTemplates2DWrap::GenerateValues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	size_t i;
	if(info.Length() > 0 && info[0]->IsInt32())
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
			native->GenerateValues(
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
			native->GenerateValues(
				info[0]->Int32Value(),
				b1
			);
			return;
		}
		else if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
								if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				native->GenerateValues(
					info[0]->Int32Value(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates2DWrap::GetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSynchronizedTemplates2DWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkSynchronizedTemplates2DWrap::GetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetComputeScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSynchronizedTemplates2DWrap::GetMTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSynchronizedTemplates2DWrap::GetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfContours();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkSynchronizedTemplates2DWrap::GetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		double r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetValue(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates2DWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
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

void VtkSynchronizedTemplates2DWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	vtkSynchronizedTemplates2D * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkSynchronizedTemplates2DWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkSynchronizedTemplates2DWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkSynchronizedTemplates2DWrap *w = new VtkSynchronizedTemplates2DWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkSynchronizedTemplates2DWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkSynchronizedTemplates2D * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkSynchronizedTemplates2DWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkSynchronizedTemplates2DWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkSynchronizedTemplates2DWrap *w = new VtkSynchronizedTemplates2DWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates2DWrap::SetArrayComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates2DWrap::SetComputeScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetComputeScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates2DWrap::SetNumberOfContours(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfContours(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkSynchronizedTemplates2DWrap::SetValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkSynchronizedTemplates2DWrap *wrapper = ObjectWrap::Unwrap<VtkSynchronizedTemplates2DWrap>(info.Holder());
	vtkSynchronizedTemplates2D *native = (vtkSynchronizedTemplates2D *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetValue(
				info[0]->Int32Value(),
				info[1]->NumberValue()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

