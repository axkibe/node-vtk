/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkStructuredGridAlgorithmWrap.h"
#include "vtkTableToStructuredGridWrap.h"
#include "vtkObjectWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTableToStructuredGridWrap::ptpl;

VtkTableToStructuredGridWrap::VtkTableToStructuredGridWrap()
{ }

VtkTableToStructuredGridWrap::VtkTableToStructuredGridWrap(vtkSmartPointer<vtkTableToStructuredGrid> _native)
{ native = _native; }

VtkTableToStructuredGridWrap::~VtkTableToStructuredGridWrap()
{ }

void VtkTableToStructuredGridWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTableToStructuredGrid").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TableToStructuredGrid").ToLocalChecked(), ConstructorGetter);
}

void VtkTableToStructuredGridWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTableToStructuredGridWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTableToStructuredGridWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetWholeExtent", GetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "getWholeExtent", GetWholeExtent);

	Nan::SetPrototypeMethod(tpl, "GetXColumn", GetXColumn);
	Nan::SetPrototypeMethod(tpl, "getXColumn", GetXColumn);

	Nan::SetPrototypeMethod(tpl, "GetXComponent", GetXComponent);
	Nan::SetPrototypeMethod(tpl, "getXComponent", GetXComponent);

	Nan::SetPrototypeMethod(tpl, "GetXComponentMaxValue", GetXComponentMaxValue);
	Nan::SetPrototypeMethod(tpl, "getXComponentMaxValue", GetXComponentMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetXComponentMinValue", GetXComponentMinValue);
	Nan::SetPrototypeMethod(tpl, "getXComponentMinValue", GetXComponentMinValue);

	Nan::SetPrototypeMethod(tpl, "GetYColumn", GetYColumn);
	Nan::SetPrototypeMethod(tpl, "getYColumn", GetYColumn);

	Nan::SetPrototypeMethod(tpl, "GetYComponent", GetYComponent);
	Nan::SetPrototypeMethod(tpl, "getYComponent", GetYComponent);

	Nan::SetPrototypeMethod(tpl, "GetYComponentMaxValue", GetYComponentMaxValue);
	Nan::SetPrototypeMethod(tpl, "getYComponentMaxValue", GetYComponentMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetYComponentMinValue", GetYComponentMinValue);
	Nan::SetPrototypeMethod(tpl, "getYComponentMinValue", GetYComponentMinValue);

	Nan::SetPrototypeMethod(tpl, "GetZColumn", GetZColumn);
	Nan::SetPrototypeMethod(tpl, "getZColumn", GetZColumn);

	Nan::SetPrototypeMethod(tpl, "GetZComponent", GetZComponent);
	Nan::SetPrototypeMethod(tpl, "getZComponent", GetZComponent);

	Nan::SetPrototypeMethod(tpl, "GetZComponentMaxValue", GetZComponentMaxValue);
	Nan::SetPrototypeMethod(tpl, "getZComponentMaxValue", GetZComponentMaxValue);

	Nan::SetPrototypeMethod(tpl, "GetZComponentMinValue", GetZComponentMinValue);
	Nan::SetPrototypeMethod(tpl, "getZComponentMinValue", GetZComponentMinValue);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetWholeExtent", SetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setWholeExtent", SetWholeExtent);

	Nan::SetPrototypeMethod(tpl, "SetXColumn", SetXColumn);
	Nan::SetPrototypeMethod(tpl, "setXColumn", SetXColumn);

	Nan::SetPrototypeMethod(tpl, "SetXComponent", SetXComponent);
	Nan::SetPrototypeMethod(tpl, "setXComponent", SetXComponent);

	Nan::SetPrototypeMethod(tpl, "SetYColumn", SetYColumn);
	Nan::SetPrototypeMethod(tpl, "setYColumn", SetYColumn);

	Nan::SetPrototypeMethod(tpl, "SetYComponent", SetYComponent);
	Nan::SetPrototypeMethod(tpl, "setYComponent", SetYComponent);

	Nan::SetPrototypeMethod(tpl, "SetZColumn", SetZColumn);
	Nan::SetPrototypeMethod(tpl, "setZColumn", SetZColumn);

	Nan::SetPrototypeMethod(tpl, "SetZComponent", SetZComponent);
	Nan::SetPrototypeMethod(tpl, "setZComponent", SetZComponent);

#ifdef VTK_NODE_PLUS_VTKTABLETOSTRUCTUREDGRIDWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTABLETOSTRUCTUREDGRIDWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTableToStructuredGridWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTableToStructuredGrid> native = vtkSmartPointer<vtkTableToStructuredGrid>::New();
		VtkTableToStructuredGridWrap* obj = new VtkTableToStructuredGridWrap(native);
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

void VtkTableToStructuredGridWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableToStructuredGridWrap::GetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
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

void VtkTableToStructuredGridWrap::GetXColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXColumn();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableToStructuredGridWrap::GetXComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToStructuredGridWrap::GetXComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXComponentMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToStructuredGridWrap::GetXComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetXComponentMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToStructuredGridWrap::GetYColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYColumn();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableToStructuredGridWrap::GetYComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToStructuredGridWrap::GetYComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYComponentMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToStructuredGridWrap::GetYComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetYComponentMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToStructuredGridWrap::GetZColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZColumn();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTableToStructuredGridWrap::GetZComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZComponent();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToStructuredGridWrap::GetZComponentMaxValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZComponentMaxValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToStructuredGridWrap::GetZComponentMinValue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetZComponentMinValue();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTableToStructuredGridWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
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

void VtkTableToStructuredGridWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	vtkTableToStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTableToStructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTableToStructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTableToStructuredGridWrap *w = new VtkTableToStructuredGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTableToStructuredGridWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTableToStructuredGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkTableToStructuredGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTableToStructuredGridWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTableToStructuredGridWrap *w = new VtkTableToStructuredGridWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToStructuredGridWrap::SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
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

void VtkTableToStructuredGridWrap::SetXColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXColumn(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToStructuredGridWrap::SetXComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetXComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToStructuredGridWrap::SetYColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYColumn(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToStructuredGridWrap::SetYComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetYComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToStructuredGridWrap::SetZColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZColumn(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTableToStructuredGridWrap::SetZComponent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTableToStructuredGridWrap *wrapper = ObjectWrap::Unwrap<VtkTableToStructuredGridWrap>(info.Holder());
	vtkTableToStructuredGrid *native = (vtkTableToStructuredGrid *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetZComponent(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

