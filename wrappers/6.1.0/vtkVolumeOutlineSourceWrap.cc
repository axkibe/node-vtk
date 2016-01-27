/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkPolyDataAlgorithmWrap.h"
#include "vtkVolumeOutlineSourceWrap.h"
#include "vtkObjectWrap.h"
#include "vtkVolumeMapperWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkVolumeOutlineSourceWrap::ptpl;

VtkVolumeOutlineSourceWrap::VtkVolumeOutlineSourceWrap()
{ }

VtkVolumeOutlineSourceWrap::VtkVolumeOutlineSourceWrap(vtkSmartPointer<vtkVolumeOutlineSource> _native)
{ native = _native; }

VtkVolumeOutlineSourceWrap::~VtkVolumeOutlineSourceWrap()
{ }

void VtkVolumeOutlineSourceWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkVolumeOutlineSource").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("VolumeOutlineSource").ToLocalChecked(), ConstructorGetter);
}

void VtkVolumeOutlineSourceWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkVolumeOutlineSourceWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkPolyDataAlgorithmWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkPolyDataAlgorithmWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkVolumeOutlineSourceWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "GenerateFacesOff", GenerateFacesOff);
	Nan::SetPrototypeMethod(tpl, "generateFacesOff", GenerateFacesOff);

	Nan::SetPrototypeMethod(tpl, "GenerateFacesOn", GenerateFacesOn);
	Nan::SetPrototypeMethod(tpl, "generateFacesOn", GenerateFacesOn);

	Nan::SetPrototypeMethod(tpl, "GenerateOutlineOff", GenerateOutlineOff);
	Nan::SetPrototypeMethod(tpl, "generateOutlineOff", GenerateOutlineOff);

	Nan::SetPrototypeMethod(tpl, "GenerateOutlineOn", GenerateOutlineOn);
	Nan::SetPrototypeMethod(tpl, "generateOutlineOn", GenerateOutlineOn);

	Nan::SetPrototypeMethod(tpl, "GenerateScalarsOff", GenerateScalarsOff);
	Nan::SetPrototypeMethod(tpl, "generateScalarsOff", GenerateScalarsOff);

	Nan::SetPrototypeMethod(tpl, "GenerateScalarsOn", GenerateScalarsOn);
	Nan::SetPrototypeMethod(tpl, "generateScalarsOn", GenerateScalarsOn);

	Nan::SetPrototypeMethod(tpl, "GetActivePlaneId", GetActivePlaneId);
	Nan::SetPrototypeMethod(tpl, "getActivePlaneId", GetActivePlaneId);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetGenerateFaces", GetGenerateFaces);
	Nan::SetPrototypeMethod(tpl, "getGenerateFaces", GetGenerateFaces);

	Nan::SetPrototypeMethod(tpl, "GetGenerateOutline", GetGenerateOutline);
	Nan::SetPrototypeMethod(tpl, "getGenerateOutline", GetGenerateOutline);

	Nan::SetPrototypeMethod(tpl, "GetGenerateScalars", GetGenerateScalars);
	Nan::SetPrototypeMethod(tpl, "getGenerateScalars", GetGenerateScalars);

	Nan::SetPrototypeMethod(tpl, "GetVolumeMapper", GetVolumeMapper);
	Nan::SetPrototypeMethod(tpl, "getVolumeMapper", GetVolumeMapper);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetActivePlaneColor", SetActivePlaneColor);
	Nan::SetPrototypeMethod(tpl, "setActivePlaneColor", SetActivePlaneColor);

	Nan::SetPrototypeMethod(tpl, "SetActivePlaneId", SetActivePlaneId);
	Nan::SetPrototypeMethod(tpl, "setActivePlaneId", SetActivePlaneId);

	Nan::SetPrototypeMethod(tpl, "SetColor", SetColor);
	Nan::SetPrototypeMethod(tpl, "setColor", SetColor);

	Nan::SetPrototypeMethod(tpl, "SetGenerateFaces", SetGenerateFaces);
	Nan::SetPrototypeMethod(tpl, "setGenerateFaces", SetGenerateFaces);

	Nan::SetPrototypeMethod(tpl, "SetGenerateOutline", SetGenerateOutline);
	Nan::SetPrototypeMethod(tpl, "setGenerateOutline", SetGenerateOutline);

	Nan::SetPrototypeMethod(tpl, "SetGenerateScalars", SetGenerateScalars);
	Nan::SetPrototypeMethod(tpl, "setGenerateScalars", SetGenerateScalars);

	Nan::SetPrototypeMethod(tpl, "SetVolumeMapper", SetVolumeMapper);
	Nan::SetPrototypeMethod(tpl, "setVolumeMapper", SetVolumeMapper);

	ptpl.Reset( tpl );
}

void VtkVolumeOutlineSourceWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkVolumeOutlineSource> native = vtkSmartPointer<vtkVolumeOutlineSource>::New();
		VtkVolumeOutlineSourceWrap* obj = new VtkVolumeOutlineSourceWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkVolumeOutlineSourceWrap::GenerateFacesOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateFacesOff();
}

void VtkVolumeOutlineSourceWrap::GenerateFacesOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateFacesOn();
}

void VtkVolumeOutlineSourceWrap::GenerateOutlineOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateOutlineOff();
}

void VtkVolumeOutlineSourceWrap::GenerateOutlineOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateOutlineOn();
}

void VtkVolumeOutlineSourceWrap::GenerateScalarsOff(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateScalarsOff();
}

void VtkVolumeOutlineSourceWrap::GenerateScalarsOn(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->GenerateScalarsOn();
}

void VtkVolumeOutlineSourceWrap::GetActivePlaneId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetActivePlaneId();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeOutlineSourceWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkVolumeOutlineSourceWrap::GetGenerateFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateFaces();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeOutlineSourceWrap::GetGenerateOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateOutline();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeOutlineSourceWrap::GetGenerateScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetGenerateScalars();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkVolumeOutlineSourceWrap::GetVolumeMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	vtkVolumeMapper * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetVolumeMapper();
		VtkVolumeMapperWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVolumeMapperWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeMapperWrap *w = new VtkVolumeMapperWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeOutlineSourceWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
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

void VtkVolumeOutlineSourceWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	vtkVolumeOutlineSource * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkVolumeOutlineSourceWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkVolumeOutlineSourceWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkVolumeOutlineSourceWrap *w = new VtkVolumeOutlineSourceWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkVolumeOutlineSourceWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkVolumeOutlineSource * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkVolumeOutlineSourceWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkVolumeOutlineSourceWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkVolumeOutlineSourceWrap *w = new VtkVolumeOutlineSourceWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeOutlineSourceWrap::SetActivePlaneColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetActivePlaneColor(
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

void VtkVolumeOutlineSourceWrap::SetActivePlaneId(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetActivePlaneId(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeOutlineSourceWrap::SetColor(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
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
				native->SetColor(
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

void VtkVolumeOutlineSourceWrap::SetGenerateFaces(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateFaces(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeOutlineSourceWrap::SetGenerateOutline(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateOutline(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeOutlineSourceWrap::SetGenerateScalars(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetGenerateScalars(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkVolumeOutlineSourceWrap::SetVolumeMapper(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkVolumeOutlineSourceWrap *wrapper = ObjectWrap::Unwrap<VtkVolumeOutlineSourceWrap>(info.Holder());
	vtkVolumeOutlineSource *native = (vtkVolumeOutlineSource *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkVolumeMapperWrap::ptpl))->HasInstance(info[0]))
	{
		VtkVolumeMapperWrap *a0 = ObjectWrap::Unwrap<VtkVolumeMapperWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetVolumeMapper(
			(vtkVolumeMapper *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

