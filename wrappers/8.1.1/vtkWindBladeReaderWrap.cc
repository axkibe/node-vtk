/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkStructuredGridAlgorithmWrap.h"
#include "vtkWindBladeReaderWrap.h"
#include "vtkObjectBaseWrap.h"
#include "vtkStructuredGridWrap.h"
#include "vtkUnstructuredGridWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkWindBladeReaderWrap::ptpl;

VtkWindBladeReaderWrap::VtkWindBladeReaderWrap()
{ }

VtkWindBladeReaderWrap::VtkWindBladeReaderWrap(vtkSmartPointer<vtkWindBladeReader> _native)
{ native = _native; }

VtkWindBladeReaderWrap::~VtkWindBladeReaderWrap()
{ }

void VtkWindBladeReaderWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkWindBladeReader").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("WindBladeReader").ToLocalChecked(), ConstructorGetter);
}

void VtkWindBladeReaderWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkWindBladeReaderWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkStructuredGridAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkStructuredGridAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkWindBladeReaderWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "DisableAllPointArrays", DisableAllPointArrays);
	Nan::SetPrototypeMethod(tpl, "disableAllPointArrays", DisableAllPointArrays);

	Nan::SetPrototypeMethod(tpl, "EnableAllPointArrays", EnableAllPointArrays);
	Nan::SetPrototypeMethod(tpl, "enableAllPointArrays", EnableAllPointArrays);

	Nan::SetPrototypeMethod(tpl, "GetBladeOutput", GetBladeOutput);
	Nan::SetPrototypeMethod(tpl, "getBladeOutput", GetBladeOutput);

	Nan::SetPrototypeMethod(tpl, "GetFieldOutput", GetFieldOutput);
	Nan::SetPrototypeMethod(tpl, "getFieldOutput", GetFieldOutput);

	Nan::SetPrototypeMethod(tpl, "GetFilename", GetFilename);
	Nan::SetPrototypeMethod(tpl, "getFilename", GetFilename);

	Nan::SetPrototypeMethod(tpl, "GetGroundOutput", GetGroundOutput);
	Nan::SetPrototypeMethod(tpl, "getGroundOutput", GetGroundOutput);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPointArrays", GetNumberOfPointArrays);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPointArrays", GetNumberOfPointArrays);

	Nan::SetPrototypeMethod(tpl, "GetPointArrayName", GetPointArrayName);
	Nan::SetPrototypeMethod(tpl, "getPointArrayName", GetPointArrayName);

	Nan::SetPrototypeMethod(tpl, "GetPointArrayStatus", GetPointArrayStatus);
	Nan::SetPrototypeMethod(tpl, "getPointArrayStatus", GetPointArrayStatus);

	Nan::SetPrototypeMethod(tpl, "GetSubExtent", GetSubExtent);
	Nan::SetPrototypeMethod(tpl, "getSubExtent", GetSubExtent);

	Nan::SetPrototypeMethod(tpl, "GetWholeExtent", GetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "getWholeExtent", GetWholeExtent);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetFilename", SetFilename);
	Nan::SetPrototypeMethod(tpl, "setFilename", SetFilename);

	Nan::SetPrototypeMethod(tpl, "SetPointArrayStatus", SetPointArrayStatus);
	Nan::SetPrototypeMethod(tpl, "setPointArrayStatus", SetPointArrayStatus);

	Nan::SetPrototypeMethod(tpl, "SetSubExtent", SetSubExtent);
	Nan::SetPrototypeMethod(tpl, "setSubExtent", SetSubExtent);

	Nan::SetPrototypeMethod(tpl, "SetWholeExtent", SetWholeExtent);
	Nan::SetPrototypeMethod(tpl, "setWholeExtent", SetWholeExtent);

#ifdef VTK_NODE_PLUS_VTKWINDBLADEREADERWRAP_INITPTPL
	VTK_NODE_PLUS_VTKWINDBLADEREADERWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkWindBladeReaderWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkWindBladeReader> native = vtkSmartPointer<vtkWindBladeReader>::New();
		VtkWindBladeReaderWrap* obj = new VtkWindBladeReaderWrap(native);
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

void VtkWindBladeReaderWrap::DisableAllPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DisableAllPointArrays();
}

void VtkWindBladeReaderWrap::EnableAllPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->EnableAllPointArrays();
}

void VtkWindBladeReaderWrap::GetBladeOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	vtkUnstructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetBladeOutput();
	VtkUnstructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkUnstructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkUnstructuredGridWrap *w = new VtkUnstructuredGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWindBladeReaderWrap::GetFieldOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	vtkStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFieldOutput();
	VtkStructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWindBladeReaderWrap::GetFilename(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFilename();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkWindBladeReaderWrap::GetGroundOutput(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	vtkStructuredGrid * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGroundOutput();
	VtkStructuredGridWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkStructuredGridWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkStructuredGridWrap *w = new VtkStructuredGridWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWindBladeReaderWrap::GetNumberOfPointArrays(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPointArrays();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkWindBladeReaderWrap::GetPointArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		char const * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPointArrayName(
			info[0]->Int32Value()
		);
		info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindBladeReaderWrap::GetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetPointArrayStatus(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindBladeReaderWrap::GetSubExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	int const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubExtent();
	Local<v8::ArrayBuffer> ab = v8::ArrayBuffer::New(v8::Isolate::GetCurrent(), 6 * sizeof(int));
	Local<v8::Int32Array> at = v8::Int32Array::New(ab, 0, 6);
	memcpy(ab->GetContents().Data(), r, 6 * sizeof(int));
	info.GetReturnValue().Set(at);
}

void VtkWindBladeReaderWrap::GetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
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

void VtkWindBladeReaderWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	vtkWindBladeReader * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkWindBladeReaderWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkWindBladeReaderWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkWindBladeReaderWrap *w = new VtkWindBladeReaderWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkWindBladeReaderWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkWindBladeReader * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkWindBladeReaderWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkWindBladeReaderWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkWindBladeReaderWrap *w = new VtkWindBladeReaderWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindBladeReaderWrap::SetFilename(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFilename(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindBladeReaderWrap::SetPointArrayStatus(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() > 1 && info[1]->IsInt32())
		{
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->SetPointArrayStatus(
				*a0,
				info[1]->Int32Value()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkWindBladeReaderWrap::SetSubExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
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
		native->SetSubExtent(
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
		native->SetSubExtent(
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
							native->SetSubExtent(
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

void VtkWindBladeReaderWrap::SetWholeExtent(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkWindBladeReaderWrap *wrapper = ObjectWrap::Unwrap<VtkWindBladeReaderWrap>(info.Holder());
	vtkWindBladeReader *native = (vtkWindBladeReader *)wrapper->native.GetPointer();
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

