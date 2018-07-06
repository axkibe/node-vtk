/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkTableAlgorithmWrap.h"
#include "vtkTransposeTableWrap.h"
#include "vtkObjectBaseWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTransposeTableWrap::ptpl;

VtkTransposeTableWrap::VtkTransposeTableWrap()
{ }

VtkTransposeTableWrap::VtkTransposeTableWrap(vtkSmartPointer<vtkTransposeTable> _native)
{ native = _native; }

VtkTransposeTableWrap::~VtkTransposeTableWrap()
{ }

void VtkTransposeTableWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTransposeTable").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TransposeTable").ToLocalChecked(), ConstructorGetter);
}

void VtkTransposeTableWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTransposeTableWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkTableAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkTableAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTransposeTableWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddIdColumnOff", AddIdColumnOff);
	Nan::SetPrototypeMethod(tpl, "addIdColumnOff", AddIdColumnOff);

	Nan::SetPrototypeMethod(tpl, "AddIdColumnOn", AddIdColumnOn);
	Nan::SetPrototypeMethod(tpl, "addIdColumnOn", AddIdColumnOn);

	Nan::SetPrototypeMethod(tpl, "GetAddIdColumn", GetAddIdColumn);
	Nan::SetPrototypeMethod(tpl, "getAddIdColumn", GetAddIdColumn);

	Nan::SetPrototypeMethod(tpl, "GetIdColumnName", GetIdColumnName);
	Nan::SetPrototypeMethod(tpl, "getIdColumnName", GetIdColumnName);

	Nan::SetPrototypeMethod(tpl, "GetUseIdColumn", GetUseIdColumn);
	Nan::SetPrototypeMethod(tpl, "getUseIdColumn", GetUseIdColumn);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAddIdColumn", SetAddIdColumn);
	Nan::SetPrototypeMethod(tpl, "setAddIdColumn", SetAddIdColumn);

	Nan::SetPrototypeMethod(tpl, "SetIdColumnName", SetIdColumnName);
	Nan::SetPrototypeMethod(tpl, "setIdColumnName", SetIdColumnName);

	Nan::SetPrototypeMethod(tpl, "SetUseIdColumn", SetUseIdColumn);
	Nan::SetPrototypeMethod(tpl, "setUseIdColumn", SetUseIdColumn);

	Nan::SetPrototypeMethod(tpl, "UseIdColumnOff", UseIdColumnOff);
	Nan::SetPrototypeMethod(tpl, "useIdColumnOff", UseIdColumnOff);

	Nan::SetPrototypeMethod(tpl, "UseIdColumnOn", UseIdColumnOn);
	Nan::SetPrototypeMethod(tpl, "useIdColumnOn", UseIdColumnOn);

#ifdef VTK_NODE_PLUS_VTKTRANSPOSETABLEWRAP_INITPTPL
	VTK_NODE_PLUS_VTKTRANSPOSETABLEWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkTransposeTableWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTransposeTable> native = vtkSmartPointer<vtkTransposeTable>::New();
		VtkTransposeTableWrap* obj = new VtkTransposeTableWrap(native);
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

void VtkTransposeTableWrap::AddIdColumnOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransposeTableWrap *wrapper = ObjectWrap::Unwrap<VtkTransposeTableWrap>(info.Holder());
	vtkTransposeTable *native = (vtkTransposeTable *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AddIdColumnOff();
}

void VtkTransposeTableWrap::AddIdColumnOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransposeTableWrap *wrapper = ObjectWrap::Unwrap<VtkTransposeTableWrap>(info.Holder());
	vtkTransposeTable *native = (vtkTransposeTable *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->AddIdColumnOn();
}

void VtkTransposeTableWrap::GetAddIdColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransposeTableWrap *wrapper = ObjectWrap::Unwrap<VtkTransposeTableWrap>(info.Holder());
	vtkTransposeTable *native = (vtkTransposeTable *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAddIdColumn();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransposeTableWrap::GetIdColumnName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransposeTableWrap *wrapper = ObjectWrap::Unwrap<VtkTransposeTableWrap>(info.Holder());
	vtkTransposeTable *native = (vtkTransposeTable *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetIdColumnName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTransposeTableWrap::GetUseIdColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransposeTableWrap *wrapper = ObjectWrap::Unwrap<VtkTransposeTableWrap>(info.Holder());
	vtkTransposeTable *native = (vtkTransposeTable *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUseIdColumn();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTransposeTableWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransposeTableWrap *wrapper = ObjectWrap::Unwrap<VtkTransposeTableWrap>(info.Holder());
	vtkTransposeTable *native = (vtkTransposeTable *)wrapper->native.GetPointer();
	vtkTransposeTable * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkTransposeTableWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTransposeTableWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTransposeTableWrap *w = new VtkTransposeTableWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTransposeTableWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransposeTableWrap *wrapper = ObjectWrap::Unwrap<VtkTransposeTableWrap>(info.Holder());
	vtkTransposeTable *native = (vtkTransposeTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectBaseWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectBaseWrap *a0 = ObjectWrap::Unwrap<VtkObjectBaseWrap>(info[0]->ToObject());
		vtkTransposeTable * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObjectBase *) a0->native.GetPointer()
		);
		VtkTransposeTableWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTransposeTableWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTransposeTableWrap *w = new VtkTransposeTableWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransposeTableWrap::SetAddIdColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransposeTableWrap *wrapper = ObjectWrap::Unwrap<VtkTransposeTableWrap>(info.Holder());
	vtkTransposeTable *native = (vtkTransposeTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAddIdColumn(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransposeTableWrap::SetIdColumnName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransposeTableWrap *wrapper = ObjectWrap::Unwrap<VtkTransposeTableWrap>(info.Holder());
	vtkTransposeTable *native = (vtkTransposeTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetIdColumnName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransposeTableWrap::SetUseIdColumn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransposeTableWrap *wrapper = ObjectWrap::Unwrap<VtkTransposeTableWrap>(info.Holder());
	vtkTransposeTable *native = (vtkTransposeTable *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUseIdColumn(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTransposeTableWrap::UseIdColumnOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransposeTableWrap *wrapper = ObjectWrap::Unwrap<VtkTransposeTableWrap>(info.Holder());
	vtkTransposeTable *native = (vtkTransposeTable *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseIdColumnOff();
}

void VtkTransposeTableWrap::UseIdColumnOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTransposeTableWrap *wrapper = ObjectWrap::Unwrap<VtkTransposeTableWrap>(info.Holder());
	vtkTransposeTable *native = (vtkTransposeTable *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->UseIdColumnOn();
}

