/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkArrayDataAlgorithmWrap.h"
#include "vtkDiagonalMatrixSourceWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkDiagonalMatrixSourceWrap::ptpl;

VtkDiagonalMatrixSourceWrap::VtkDiagonalMatrixSourceWrap()
{ }

VtkDiagonalMatrixSourceWrap::VtkDiagonalMatrixSourceWrap(vtkSmartPointer<vtkDiagonalMatrixSource> _native)
{ native = _native; }

VtkDiagonalMatrixSourceWrap::~VtkDiagonalMatrixSourceWrap()
{ }

void VtkDiagonalMatrixSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkDiagonalMatrixSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("DiagonalMatrixSource").ToLocalChecked(), ConstructorGetter);
}

void VtkDiagonalMatrixSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkDiagonalMatrixSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkArrayDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkArrayDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkDiagonalMatrixSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GetArrayType", GetArrayType);
	Nan::SetPrototypeMethod(tpl, "getArrayType", GetArrayType);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetColumnLabel", GetColumnLabel);
	Nan::SetPrototypeMethod(tpl, "getColumnLabel", GetColumnLabel);

	Nan::SetPrototypeMethod(tpl, "GetDiagonal", GetDiagonal);
	Nan::SetPrototypeMethod(tpl, "getDiagonal", GetDiagonal);

	Nan::SetPrototypeMethod(tpl, "GetRowLabel", GetRowLabel);
	Nan::SetPrototypeMethod(tpl, "getRowLabel", GetRowLabel);

	Nan::SetPrototypeMethod(tpl, "GetSubDiagonal", GetSubDiagonal);
	Nan::SetPrototypeMethod(tpl, "getSubDiagonal", GetSubDiagonal);

	Nan::SetPrototypeMethod(tpl, "GetSuperDiagonal", GetSuperDiagonal);
	Nan::SetPrototypeMethod(tpl, "getSuperDiagonal", GetSuperDiagonal);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetArrayType", SetArrayType);
	Nan::SetPrototypeMethod(tpl, "setArrayType", SetArrayType);

	Nan::SetPrototypeMethod(tpl, "SetColumnLabel", SetColumnLabel);
	Nan::SetPrototypeMethod(tpl, "setColumnLabel", SetColumnLabel);

	Nan::SetPrototypeMethod(tpl, "SetDiagonal", SetDiagonal);
	Nan::SetPrototypeMethod(tpl, "setDiagonal", SetDiagonal);

	Nan::SetPrototypeMethod(tpl, "SetRowLabel", SetRowLabel);
	Nan::SetPrototypeMethod(tpl, "setRowLabel", SetRowLabel);

	Nan::SetPrototypeMethod(tpl, "SetSubDiagonal", SetSubDiagonal);
	Nan::SetPrototypeMethod(tpl, "setSubDiagonal", SetSubDiagonal);

	Nan::SetPrototypeMethod(tpl, "SetSuperDiagonal", SetSuperDiagonal);
	Nan::SetPrototypeMethod(tpl, "setSuperDiagonal", SetSuperDiagonal);

	ptpl.Reset( tpl );
}

void VtkDiagonalMatrixSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkDiagonalMatrixSource> native = vtkSmartPointer<vtkDiagonalMatrixSource>::New();
		VtkDiagonalMatrixSourceWrap* obj = new VtkDiagonalMatrixSourceWrap(native);
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

void VtkDiagonalMatrixSourceWrap::GetArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetArrayType();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiagonalMatrixSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDiagonalMatrixSourceWrap::GetColumnLabel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetColumnLabel();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDiagonalMatrixSourceWrap::GetDiagonal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDiagonal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiagonalMatrixSourceWrap::GetRowLabel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRowLabel();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkDiagonalMatrixSourceWrap::GetSubDiagonal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSubDiagonal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiagonalMatrixSourceWrap::GetSuperDiagonal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetSuperDiagonal();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkDiagonalMatrixSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
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

void VtkDiagonalMatrixSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	vtkDiagonalMatrixSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkDiagonalMatrixSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkDiagonalMatrixSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkDiagonalMatrixSourceWrap *w = new VtkDiagonalMatrixSourceWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkDiagonalMatrixSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkDiagonalMatrixSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkDiagonalMatrixSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkDiagonalMatrixSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkDiagonalMatrixSourceWrap *w = new VtkDiagonalMatrixSourceWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiagonalMatrixSourceWrap::SetArrayType(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetArrayType(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiagonalMatrixSourceWrap::SetColumnLabel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetColumnLabel(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiagonalMatrixSourceWrap::SetDiagonal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDiagonal(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiagonalMatrixSourceWrap::SetRowLabel(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRowLabel(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiagonalMatrixSourceWrap::SetSubDiagonal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSubDiagonal(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkDiagonalMatrixSourceWrap::SetSuperDiagonal(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkDiagonalMatrixSourceWrap *wrapper = ObjectWrap::Unwrap<VtkDiagonalMatrixSourceWrap>(info.Holder());
	vtkDiagonalMatrixSource *native = (vtkDiagonalMatrixSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetSuperDiagonal(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}
