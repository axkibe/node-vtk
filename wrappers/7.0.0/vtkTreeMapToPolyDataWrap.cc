/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkTreeMapToPolyDataWrap.h"
#include "vtkObjectWrap.h"
#include "vtkInformationWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkTreeMapToPolyDataWrap::ptpl;

VtkTreeMapToPolyDataWrap::VtkTreeMapToPolyDataWrap()
{ }

VtkTreeMapToPolyDataWrap::VtkTreeMapToPolyDataWrap(vtkSmartPointer<vtkTreeMapToPolyData> _native)
{ native = _native; }

VtkTreeMapToPolyDataWrap::~VtkTreeMapToPolyDataWrap()
{ }

void VtkTreeMapToPolyDataWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkTreeMapToPolyData").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("TreeMapToPolyData").ToLocalChecked(), ConstructorGetter);
}

void VtkTreeMapToPolyDataWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkTreeMapToPolyDataWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkTreeMapToPolyDataWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "FillInputPortInformation", FillInputPortInformation);
	Nan::SetPrototypeMethod(tpl, "fillInputPortInformation", FillInputPortInformation);

	Nan::SetPrototypeMethod(tpl, "GetAddNormals", GetAddNormals);
	Nan::SetPrototypeMethod(tpl, "getAddNormals", GetAddNormals);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetLevelDeltaZ", GetLevelDeltaZ);
	Nan::SetPrototypeMethod(tpl, "getLevelDeltaZ", GetLevelDeltaZ);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAddNormals", SetAddNormals);
	Nan::SetPrototypeMethod(tpl, "setAddNormals", SetAddNormals);

	Nan::SetPrototypeMethod(tpl, "SetLevelArrayName", SetLevelArrayName);
	Nan::SetPrototypeMethod(tpl, "setLevelArrayName", SetLevelArrayName);

	Nan::SetPrototypeMethod(tpl, "SetLevelDeltaZ", SetLevelDeltaZ);
	Nan::SetPrototypeMethod(tpl, "setLevelDeltaZ", SetLevelDeltaZ);

	Nan::SetPrototypeMethod(tpl, "SetRectanglesArrayName", SetRectanglesArrayName);
	Nan::SetPrototypeMethod(tpl, "setRectanglesArrayName", SetRectanglesArrayName);

	ptpl.Reset( tpl );
}

void VtkTreeMapToPolyDataWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkTreeMapToPolyData> native = vtkSmartPointer<vtkTreeMapToPolyData>::New();
		VtkTreeMapToPolyDataWrap* obj = new VtkTreeMapToPolyDataWrap(native);
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

void VtkTreeMapToPolyDataWrap::FillInputPortInformation(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapToPolyDataWrap>(info.Holder());
	vtkTreeMapToPolyData *native = (vtkTreeMapToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() > 1 && info[1]->IsObject() && (Nan::New(VtkInformationWrap::ptpl))->HasInstance(info[1]))
		{
			VtkInformationWrap *a1 = ObjectWrap::Unwrap<VtkInformationWrap>(info[1]->ToObject());
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->FillInputPortInformation(
				info[0]->Int32Value(),
				(vtkInformation *) a1->native.GetPointer()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeMapToPolyDataWrap::GetAddNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapToPolyDataWrap>(info.Holder());
	vtkTreeMapToPolyData *native = (vtkTreeMapToPolyData *)wrapper->native.GetPointer();
	bool r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAddNormals();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeMapToPolyDataWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapToPolyDataWrap>(info.Holder());
	vtkTreeMapToPolyData *native = (vtkTreeMapToPolyData *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkTreeMapToPolyDataWrap::GetLevelDeltaZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapToPolyDataWrap>(info.Holder());
	vtkTreeMapToPolyData *native = (vtkTreeMapToPolyData *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLevelDeltaZ();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkTreeMapToPolyDataWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapToPolyDataWrap>(info.Holder());
	vtkTreeMapToPolyData *native = (vtkTreeMapToPolyData *)wrapper->native.GetPointer();
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

void VtkTreeMapToPolyDataWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapToPolyDataWrap>(info.Holder());
	vtkTreeMapToPolyData *native = (vtkTreeMapToPolyData *)wrapper->native.GetPointer();
	vtkTreeMapToPolyData * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkTreeMapToPolyDataWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkTreeMapToPolyDataWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkTreeMapToPolyDataWrap *w = new VtkTreeMapToPolyDataWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkTreeMapToPolyDataWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapToPolyDataWrap>(info.Holder());
	vtkTreeMapToPolyData *native = (vtkTreeMapToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkTreeMapToPolyData * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkTreeMapToPolyDataWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkTreeMapToPolyDataWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkTreeMapToPolyDataWrap *w = new VtkTreeMapToPolyDataWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeMapToPolyDataWrap::SetAddNormals(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapToPolyDataWrap>(info.Holder());
	vtkTreeMapToPolyData *native = (vtkTreeMapToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsBoolean())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAddNormals(
			info[0]->BooleanValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeMapToPolyDataWrap::SetLevelArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapToPolyDataWrap>(info.Holder());
	vtkTreeMapToPolyData *native = (vtkTreeMapToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLevelArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeMapToPolyDataWrap::SetLevelDeltaZ(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapToPolyDataWrap>(info.Holder());
	vtkTreeMapToPolyData *native = (vtkTreeMapToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLevelDeltaZ(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkTreeMapToPolyDataWrap::SetRectanglesArrayName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkTreeMapToPolyDataWrap *wrapper = ObjectWrap::Unwrap<VtkTreeMapToPolyDataWrap>(info.Holder());
	vtkTreeMapToPolyData *native = (vtkTreeMapToPolyData *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRectanglesArrayName(
			*a0
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

