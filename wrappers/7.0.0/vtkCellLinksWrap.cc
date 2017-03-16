/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>

#include "vtkAbstractCellLinksWrap.h"
#include "vtkCellLinksWrap.h"
#include "vtkObjectWrap.h"
#include "vtkDataSetWrap.h"
#include "vtkCellArrayWrap.h"
#include "../../plus/plus.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkCellLinksWrap::ptpl;

VtkCellLinksWrap::VtkCellLinksWrap()
{ }

VtkCellLinksWrap::VtkCellLinksWrap(vtkSmartPointer<vtkCellLinks> _native)
{ native = _native; }

VtkCellLinksWrap::~VtkCellLinksWrap()
{ }

void VtkCellLinksWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkCellLinks").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("CellLinks").ToLocalChecked(), ConstructorGetter);
}

void VtkCellLinksWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkCellLinksWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAbstractCellLinksWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAbstractCellLinksWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkCellLinksWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "BuildLinks", BuildLinks);
	Nan::SetPrototypeMethod(tpl, "buildLinks", BuildLinks);

	Nan::SetPrototypeMethod(tpl, "DeepCopy", DeepCopy);
	Nan::SetPrototypeMethod(tpl, "deepCopy", DeepCopy);

	Nan::SetPrototypeMethod(tpl, "GetActualMemorySize", GetActualMemorySize);
	Nan::SetPrototypeMethod(tpl, "getActualMemorySize", GetActualMemorySize);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

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

	Nan::SetPrototypeMethod(tpl, "Squeeze", Squeeze);
	Nan::SetPrototypeMethod(tpl, "squeeze", Squeeze);

#ifdef VTK_NODE_PLUS_VTKCELLLINKSWRAP_INITPTPL
	VTK_NODE_PLUS_VTKCELLLINKSWRAP_INITPTPL
#endif
	ptpl.Reset( tpl );
}

void VtkCellLinksWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkCellLinks> native = vtkSmartPointer<vtkCellLinks>::New();
		VtkCellLinksWrap* obj = new VtkCellLinksWrap(native);
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

void VtkCellLinksWrap::BuildLinks(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkCellLinksWrap>(info.Holder());
	vtkCellLinks *native = (vtkCellLinks *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkDataSetWrap::ptpl))->HasInstance(info[0]))
	{
		VtkDataSetWrap *a0 = ObjectWrap::Unwrap<VtkDataSetWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkCellArrayWrap::ptpl))->HasInstance(info[1]))
		{
			VtkCellArrayWrap *a1 = ObjectWrap::Unwrap<VtkCellArrayWrap>(info[1]->ToObject());
						if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->BuildLinks(
				(vtkDataSet *) a0->native.GetPointer(),
				(vtkCellArray *) a1->native.GetPointer()
			);
			return;
		}
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->BuildLinks(
			(vtkDataSet *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellLinksWrap::DeepCopy(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkCellLinksWrap>(info.Holder());
	vtkCellLinks *native = (vtkCellLinks *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkCellLinksWrap::ptpl))->HasInstance(info[0]))
	{
		VtkCellLinksWrap *a0 = ObjectWrap::Unwrap<VtkCellLinksWrap>(info[0]->ToObject());
				if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->DeepCopy(
			(vtkCellLinks *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellLinksWrap::GetActualMemorySize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkCellLinksWrap>(info.Holder());
	vtkCellLinks *native = (vtkCellLinks *)wrapper->native.GetPointer();
	unsigned int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActualMemorySize();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkCellLinksWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkCellLinksWrap>(info.Holder());
	vtkCellLinks *native = (vtkCellLinks *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkCellLinksWrap::Initialize(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkCellLinksWrap>(info.Holder());
	vtkCellLinks *native = (vtkCellLinks *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Initialize();
}

void VtkCellLinksWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkCellLinksWrap>(info.Holder());
	vtkCellLinks *native = (vtkCellLinks *)wrapper->native.GetPointer();
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

void VtkCellLinksWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkCellLinksWrap>(info.Holder());
	vtkCellLinks *native = (vtkCellLinks *)wrapper->native.GetPointer();
	vtkCellLinks * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	VtkCellLinksWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkCellLinksWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkCellLinksWrap *w = new VtkCellLinksWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkCellLinksWrap::Reset(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkCellLinksWrap>(info.Holder());
	vtkCellLinks *native = (vtkCellLinks *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Reset();
}

void VtkCellLinksWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkCellLinksWrap>(info.Holder());
	vtkCellLinks *native = (vtkCellLinks *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkCellLinks * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		VtkCellLinksWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkCellLinksWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkCellLinksWrap *w = new VtkCellLinksWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkCellLinksWrap::Squeeze(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkCellLinksWrap *wrapper = ObjectWrap::Unwrap<VtkCellLinksWrap>(info.Holder());
	vtkCellLinks *native = (vtkCellLinks *)wrapper->native.GetPointer();
		if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Squeeze();
}

