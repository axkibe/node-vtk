/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkAMRDataSetCacheWrap.h"
#include "vtkUniformGridWrap.h"
#include "vtkDataArrayWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkAMRDataSetCacheWrap::constructor;
Nan::Persistent<v8::FunctionTemplate> VtkAMRDataSetCacheWrap::ptpl;

VtkAMRDataSetCacheWrap::VtkAMRDataSetCacheWrap()
{ }

VtkAMRDataSetCacheWrap::VtkAMRDataSetCacheWrap(vtkSmartPointer<vtkAMRDataSetCache> _native)
{ native = _native; }

VtkAMRDataSetCacheWrap::~VtkAMRDataSetCacheWrap()
{ }

void VtkAMRDataSetCacheWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAMRDataSetCache").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AMRDataSetCache").ToLocalChecked(), ConstructorGetter);
}

void VtkAMRDataSetCacheWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAMRDataSetCacheWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkObjectWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkObjectWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAMRDataSetCacheWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetAMRBlock", GetAMRBlock);
	Nan::SetPrototypeMethod(tpl, "getAMRBlock", GetAMRBlock);

	Nan::SetPrototypeMethod(tpl, "GetAMRBlockCellData", GetAMRBlockCellData);
	Nan::SetPrototypeMethod(tpl, "getAMRBlockCellData", GetAMRBlockCellData);

	Nan::SetPrototypeMethod(tpl, "GetAMRBlockPointData", GetAMRBlockPointData);
	Nan::SetPrototypeMethod(tpl, "getAMRBlockPointData", GetAMRBlockPointData);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "InsertAMRBlock", InsertAMRBlock);
	Nan::SetPrototypeMethod(tpl, "insertAMRBlock", InsertAMRBlock);

	Nan::SetPrototypeMethod(tpl, "InsertAMRBlockCellData", InsertAMRBlockCellData);
	Nan::SetPrototypeMethod(tpl, "insertAMRBlockCellData", InsertAMRBlockCellData);

	Nan::SetPrototypeMethod(tpl, "InsertAMRBlockPointData", InsertAMRBlockPointData);
	Nan::SetPrototypeMethod(tpl, "insertAMRBlockPointData", InsertAMRBlockPointData);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	constructor.Reset( tpl->GetFunction() );
	ptpl.Reset( tpl );
}

void VtkAMRDataSetCacheWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAMRDataSetCache> native = vtkSmartPointer<vtkAMRDataSetCache>::New();
		VtkAMRDataSetCacheWrap* obj = new VtkAMRDataSetCacheWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAMRDataSetCacheWrap::GetAMRBlock(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRDataSetCacheWrap *wrapper = ObjectWrap::Unwrap<VtkAMRDataSetCacheWrap>(info.Holder());
	vtkAMRDataSetCache *native = (vtkAMRDataSetCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		vtkUniformGrid * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->GetAMRBlock(
			info[0]->Int32Value()
		);
			VtkUniformGridWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkUniformGridWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkUniformGridWrap *w = new VtkUniformGridWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRDataSetCacheWrap::GetAMRBlockCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRDataSetCacheWrap *wrapper = ObjectWrap::Unwrap<VtkAMRDataSetCacheWrap>(info.Holder());
	vtkAMRDataSetCache *native = (vtkAMRDataSetCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			vtkDataArray * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetAMRBlockCellData(
				info[0]->Int32Value(),
				*a1
			);
				VtkDataArrayWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::Function>(VtkDataArrayWrap::constructor);
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkDataArrayWrap *w = new VtkDataArrayWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRDataSetCacheWrap::GetAMRBlockPointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRDataSetCacheWrap *wrapper = ObjectWrap::Unwrap<VtkAMRDataSetCacheWrap>(info.Holder());
	vtkAMRDataSetCache *native = (vtkAMRDataSetCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			Nan::Utf8String a1(info[1]);
			vtkDataArray * r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->GetAMRBlockPointData(
				info[0]->Int32Value(),
				*a1
			);
				VtkDataArrayWrap::InitPtpl();
			v8::Local<v8::Value> argv[1] =
				{ Nan::New(vtkNodeJsNoWrap) };
			v8::Local<v8::Function> cons =
				Nan::New<v8::Function>(VtkDataArrayWrap::constructor);
			v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
			VtkDataArrayWrap *w = new VtkDataArrayWrap();
			w->native.TakeReference(r);
			w->Wrap(wo);
			info.GetReturnValue().Set(wo);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRDataSetCacheWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRDataSetCacheWrap *wrapper = ObjectWrap::Unwrap<VtkAMRDataSetCacheWrap>(info.Holder());
	vtkAMRDataSetCache *native = (vtkAMRDataSetCache *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAMRDataSetCacheWrap::InsertAMRBlock(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRDataSetCacheWrap *wrapper = ObjectWrap::Unwrap<VtkAMRDataSetCacheWrap>(info.Holder());
	vtkAMRDataSetCache *native = (vtkAMRDataSetCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkUniformGridWrap::ptpl))->HasInstance(info[1]))
		{
			VtkUniformGridWrap *a1 = ObjectWrap::Unwrap<VtkUniformGridWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InsertAMRBlock(
				info[0]->Int32Value(),
				(vtkUniformGrid *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRDataSetCacheWrap::InsertAMRBlockCellData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRDataSetCacheWrap *wrapper = ObjectWrap::Unwrap<VtkAMRDataSetCacheWrap>(info.Holder());
	vtkAMRDataSetCache *native = (vtkAMRDataSetCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InsertAMRBlockCellData(
				info[0]->Int32Value(),
				(vtkDataArray *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRDataSetCacheWrap::InsertAMRBlockPointData(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRDataSetCacheWrap *wrapper = ObjectWrap::Unwrap<VtkAMRDataSetCacheWrap>(info.Holder());
	vtkAMRDataSetCache *native = (vtkAMRDataSetCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkDataArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkDataArrayWrap *a1 = ObjectWrap::Unwrap<VtkDataArrayWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->InsertAMRBlockPointData(
				info[0]->Int32Value(),
				(vtkDataArray *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAMRDataSetCacheWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRDataSetCacheWrap *wrapper = ObjectWrap::Unwrap<VtkAMRDataSetCacheWrap>(info.Holder());
	vtkAMRDataSetCache *native = (vtkAMRDataSetCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkAMRDataSetCacheWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRDataSetCacheWrap *wrapper = ObjectWrap::Unwrap<VtkAMRDataSetCacheWrap>(info.Holder());
	vtkAMRDataSetCache *native = (vtkAMRDataSetCache *)wrapper->native.GetPointer();
	vtkAMRDataSetCache * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAMRDataSetCacheWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkAMRDataSetCacheWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAMRDataSetCacheWrap *w = new VtkAMRDataSetCacheWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAMRDataSetCacheWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAMRDataSetCacheWrap *wrapper = ObjectWrap::Unwrap<VtkAMRDataSetCacheWrap>(info.Holder());
	vtkAMRDataSetCache *native = (vtkAMRDataSetCache *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAMRDataSetCache * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAMRDataSetCacheWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkAMRDataSetCacheWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAMRDataSetCacheWrap *w = new VtkAMRDataSetCacheWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

